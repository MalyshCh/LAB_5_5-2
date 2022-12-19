#pragma once
#include "Weapon.h"
#include <iostream>

using namespace std;

class Characteristic {

public:
    Characteristic(float strength);

    //float getDamage(Weapon& weapon);
    float getDamage(Weapon& weapon); // 5-2.3

private:

    float strength;
};
