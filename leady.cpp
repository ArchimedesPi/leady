

LEaDy::setRawRGBPWM(int r, int g, int b) {
    analogWrite(this::rPin, r);
    analogWrite(this::gPin, g);
    analogWrite(this::bPin, b);
}

