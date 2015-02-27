#ifndef __LEADY_H__
#define __LEADY_H__

class LEaDy {
public:
    LEaDy();
    void setRGB(float r, float g, float b);
    void setHSV(float h, float s, float v);
    void off();
    void onWhite(float intensity);
private:
    int rPwm;
    int gPwm;
    int bPwm;
}
    
