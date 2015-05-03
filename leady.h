#ifndef __LEADY_H__
#define __LEADY_H__

#include <Arduino.h>

namespace LEaDy {
    class LED {
    public:
        LED(pin);
        void setIntensity(float intensity);
        void off();
    private:
        int pin;
        int pwm;
        void setRawPWM(int p);
    }
    class RGBLED {
    public:
        RGBLED(rPin, gPin, bPin);
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
}
    
