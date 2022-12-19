#include "Characteristic.h"
#include <string>

Characteristic::Characteristic(float strength) {
    this->strength = strength;
};

//float Characteristic::getDamage(Weapon weapon) {
float Characteristic::getDamage(Weapon & weapon) { // 5-2.3
    return (weapon.getDamage() + strength);
};
