#ifndef __LEADY_H__
#define __LEADY_H__

#include <Arduino.h>

class LEaDy {
public:
    LEaDy();
    void setRGB(float r, float g, float b);
    void setHSV(float h, float s, float v);
    void off();
    void onWhite(float intensity);
private:
    // -- pin definitions
    int rPin;
    int gPin;
    int bPin;
    // -- pin statuses
    int rPwm;
    int gPwm;
    int bPwm;
    void setRawRGBPWM(int r, int g, int b);
}
    
