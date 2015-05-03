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
		setRawPWM(correctIntensity(intensity));
	}
	void LED::off() {
		setRawPWM(0);
	}
	void LED::setRawPWM(int pwm) {
		analogWrite(this->pin, pwm);
	}
}