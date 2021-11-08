#pragma once

class Gpio{
    public:
    Gpio(int pin, int mode=OUTPUT);
        void on();
        void off();
        void toggle();
        bool isOn();
        bool isOff();

    private:
    int _pin;
        

};