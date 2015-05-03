#include "leady.h"


namespace LEaDy {
	LED::LED(int pin) {
		this->pin = pin;
	}
	// intensity ranges [0, 1024]
	// returns [0, 255] corrected with CIE1931
	int LED::correctIntensity(int intensity) {
		return LEaDy::cie[intensity];
	}
	void LED::setIntensity(float intensity) {
		setRawPWM(correctIntensity(int(intensity)));
	}
	void LED::off() {
		setRawPWM(0);
	}
	void LED::setRawPWM(int pwm) {
		analogWrite(this->pin, pwm);
	}

	RGBLED::RGBLED(rPin, gPin, bPin) {
		this->r = LEaDy::LED(rPin);
		this->g = LEaDy::LED(gPin);
		this->b = LEaDy::LED(bPin);
	}
	void RGBLED::setRGB(float r, float g, float b) {
		this->r::setIntensity(r);
		this->g::setIntensity(g);
		this->b::setIntensity(b);
	}
	void RGBLED::off() {
		this->r::off();
		this->g::off();
		this->b::off();
	}
	void RGBLED::onWhite(float intensity) {
		this->r::setIntensity(intensity);
		this->g::setIntensity(intensity);
		this->b::setIntensity(intensity);
	}
}