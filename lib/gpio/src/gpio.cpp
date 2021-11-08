#include <Arduino.h>
#include "gpio.h"

Gpio::Gpio(int pin, int mode){
        _pin = pin;
        if(mode != OUTPUT)
                pinMode(pin, mode);

}
void Gpio::on(){
         digitalWrite(_pin, HIGH);
}
void Gpio::off(){
         digitalWrite(_pin, LOW);
}
bool Gpio::isOn(){
        if(digitalRead(_pin)==HIGH)
                return true;
        else
                return false;
}
bool Gpio::isOff(){
        return !isOn();

}
void Gpio::toggle(){

        if(isOn())
                off();
        else
                on();


}