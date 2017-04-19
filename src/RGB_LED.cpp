#include "RGB_LED.h"

RGB_LED::RGB_LED(PinName red, PinName green, PinName blue) : _red(red), _green(green), _blue(blue)
{
    _red.period(0.001);
    _green.period(0.001);
    _blue.period(0.001);
    TurnOff();
}

void RGB_LED::setColor(uint8_t red, uint8_t green, uint8_t blue) {
    _red.write(red / 255.0f);
    _green.write(green / 255.0f);
    _blue.write(blue / 255.0f);
}

void RGB_LED::turnOff() {
    setColor(0, 0, 0);
}