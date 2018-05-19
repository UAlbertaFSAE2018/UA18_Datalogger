#include <Arduino.h>
#include "sensorShield.h"


SensorShield::SensorShield(){
    pinMode(SELECT_PIN0, OUTPUT);
    pinMode(SELECT_PIN1, OUTPUT);
    pinMode(SELECT_PIN2, OUTPUT);
    pinMode(SELECT_PIN3, OUTPUT);
}

int SensorShield::getSensorValues(){
    for(int i = 0; i < 0b1111; i++){
        digitalWrite(SELECT_PIN0, i & 0b0001);
        digitalWrite(SELECT_PIN1, i & 0b0010);
        digitalWrite(SELECT_PIN2, i & 0b0100);
        digitalWrite(SELECT_PIN3, i & 0b1000);

        for(int j = 0; j < 16; j++){
            
        }
    }
}

