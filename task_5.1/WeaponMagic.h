#pragma once
#include "Weapon.h"

class WeaponMagic : public Weapon { // 5.1.7

public:

    WeaponMagic(string name, float damage, float weight, Types type, float extraDamage); // 5.1.9

    WeaponMagic(); // 5.1.9

    float getExtraDamage(); // 5.1.10

private:

    float extraDamage; // 5.1.8
};
