#include "WeaponMagic.h"
#include <string>

WeaponMagic::WeaponMagic(string name, float damage, float weight, Types type, float extraDamage) :
	Weapon(name, damage, weight, type) {
	this->extraDamage = extraDamage;
};

WeaponMagic::WeaponMagic() : WeaponMagic("Посох Ангмара", 2, 3.1f, TWOHANDED, 4) {};

float WeaponMagic::getExtraDamage() {
	return extraDamage;
};

float WeaponMagic::getDamage() {
	return Weapon::getDamage() + getExtraDamage();
};

void WeaponMagic::outputData() {
	Weapon::outputData();
	cout << ", extraDamage - " << extraDamage;
};

void WeaponMagic::attack() { // 5-2.2
	cout << "Атакуем магическим оружием";
};
