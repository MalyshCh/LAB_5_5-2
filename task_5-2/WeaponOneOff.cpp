#include "WeaponOneOff.h"
#include <string>

WeaponOneOff::WeaponOneOff(string name, float damage, float weight, Types type) : // 5-2.8
	Weapon(name, damage, weight, type) {};

WeaponOneOff::WeaponOneOff() : WeaponOneOff("Стрела деревянная", 1, 0.1f, ONEHANDED) {}; // 5-2.8

bool WeaponOneOff::getUsed() { // 5-2.7
	return isUsed;
};

void WeaponOneOff::employ() { // 5-2.7
	isUsed = true;
};

void WeaponOneOff::attack() { // 5-2.7
	if (getUsed()) cout << "Оружие уже было использовано";
	else {
		employ();
		cout << "Атакуем одноразовым оружием";
	};
};
