#pragma once
#include "Weapon.h"

class WeaponMagic : public Weapon {

public:

    WeaponMagic(string name, float damage, float weight, Types type, float extraDamage);

    WeaponMagic();

    //~WeaponMagic();

    float getExtraDamage();

    float getDamage() override; // 5.2.2

    void outputData() override;

private:

    float extraDamage;
};
