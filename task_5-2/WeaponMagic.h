#pragma once
#include "Weapon.h"

class WeaponMagic : public Weapon {

public:

    WeaponMagic(string name, float damage, float weight, Types type, float extraDamage);

    WeaponMagic();

    float getExtraDamage();

    float getDamage() override;

    void outputData() override;

    void attack() override; // 5-2.2

private:

    float extraDamage;
};
