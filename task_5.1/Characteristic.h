#pragma once
#include "Weapon.h"
#include <iostream>

using namespace std;

class Characteristic {

public:
    Characteristic(float strength);

    float getDamage(Weapon weapon);

private:

    float strength;
};
