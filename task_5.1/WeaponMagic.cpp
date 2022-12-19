#include "WeaponMagic.h"
#include <string>

WeaponMagic::WeaponMagic(string name, float damage, float weight, Types type, float extraDamage) :  // 5.1.9
	Weapon(name, damage, weight, type) {
	this->extraDamage = extraDamage;
};

WeaponMagic::WeaponMagic() : WeaponMagic("Посох Ангмара", 2, 3.1, TWOHANDED, 4) {}; // 5.1.9

float WeaponMagic::getExtraDamage() { // 5.1.10
	return extraDamage;
};
