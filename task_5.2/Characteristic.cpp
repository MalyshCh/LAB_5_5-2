#include "Characteristic.h"
#include <string>

Characteristic::Characteristic(float strength) {
    this->strength = strength;
};

float Characteristic::getDamage(Weapon weapon) {
    return (weapon.getDamage() + strength);
};
