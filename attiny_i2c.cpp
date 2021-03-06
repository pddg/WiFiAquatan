#include "Arduino.h"
#include <Wire.h>
#include "attiny_i2c.h"

attiny_i2c::attiny_i2c(uint8_t address,uint8_t pin) {
  _address = address;
  _pin     = pin;
//  Wire.begin();
}

uint8_t attiny_i2c::value() {  
  return _value;
}

void attiny_i2c::value(uint8_t val) {
  _value = val;
  Wire.beginTransmission(_address);
  Wire.write(_pin);
  Wire.write(val);
  Wire.endTransmission();
  Wire.requestFrom(_address, 1); // request 1 bytes
  while (Wire.available() == 0);
  Wire.read();  
}

void attiny_i2c::heartbeat() {
  Wire.requestFrom(_address, 1); // request 1 bytes
  while (Wire.available() == 0);
  Wire.read();
}
