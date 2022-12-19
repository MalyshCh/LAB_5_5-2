#pragma once
#include "Weapon.h"

class WeaponOneOff : public Weapon { // 5-2.5

public:

	WeaponOneOff(string name, float damage, float weight, Types type); // 5-2.8

	WeaponOneOff(); // 5-2.8

	bool getUsed(); // 5-2.7

	void employ(); // 5-2.7

	void attack(); // 5-2.7

private:

	bool isUsed = false; // 5-2.6

};
