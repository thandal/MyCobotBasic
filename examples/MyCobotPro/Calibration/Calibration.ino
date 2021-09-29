#include <M5Stack.h>
#include <SCServo.h>

SMSBL sm;
int baundrate = 115200;

void setup() {

  M5.begin(true, false, true);
  M5.Power.begin();

  Serial.begin(9600);
  Serial2.begin(baundrate);
  sm.pSerial = &Serial2;

  delay(200);
}

// Add the main program code into the continuous loop() function
void loop() {
  // update button state
  M5.update();
 
  // if you want to use Releasefor("was released for"), use .wasReleasefor(int time) below
  if (M5.BtnA.wasReleased()) {

   for(int i = 1; i <7 ; i++)
   {
    sm.CalibrationOfs(i);
    delay(10);
    
   }

  } else if (M5.BtnB.wasReleased()) {
    for(int i =1; i <7; i++)
    {
      Serial.print(sm.ReadPos(i));
      Serial.print(" ");
    }
    Serial.println();
  }
  else if (M5.BtnC.wasReleased()){
     for(int i = 1; i <7 ; i++)
   {

    delay(10);
     sm.unLockEprom(i);//打开EPROM保存功能
     delay(3);
     sm.writeByte(i, 21, 10);//ID
     delay(3);
      sm.writeByte(i, 22, 0);//ID
     delay(3);
     sm.writeByte(i, 23, 5);//ID
     delay(3);
     sm.LockEprom(i);//关闭EPROM保存功能
     delay(3);
    delay(10);
   }
  }
}