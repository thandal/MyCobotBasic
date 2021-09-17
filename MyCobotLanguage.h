#ifndef MYCOBOTLANGUAGE_H_
#define MYCOBOTLANGUAGE_H_
#define USE_M5_FONT_CREATOR

#include <Arduino.h>
#include <M5Stack.h>
#include <EEPROM.h>
#include "mycobot_24px.h"

#define Lan_Add     2
#define EEPROM_SIZE 64

#define EN_NO   1
#define CN_NO   2

class MyCobotLanguage {
 public:
    MyCobotLanguage();
    int language_val;

    void clearLanguage();
    int language();
    void setLanguage(int lan_num);

 private:
    bool hasSeletecd();
    int selectLanguage();
};

#endif // MYCOBOTLANGUAGE_H_

