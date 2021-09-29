#include <MyCobotProBasic.h>
#include <ParameterList.h>

MyCobotProBasic myCobotpro;

void setup() {

  Serial.begin(115200);
  delay(1000);

  myCobotpro.setup();
  delay(1000);
  
  myCobotpro.powerOn();
  delay(1000);

}

void loop() {

  while (Serial.available() > 0) {      // If anything comes in Serial (USB),
    Serial2.write(Serial.read());   // read it and send it out Serial2
  }

  while (Serial2.available() > 0) {     // If anything comes in Serial 2
    Serial.write(Serial2.read());   // read it and send it out Serial (USB)
  }

}