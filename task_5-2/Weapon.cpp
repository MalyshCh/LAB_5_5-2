#include "Weapon.h"
#include <string>

Weapon::Weapon(string name, float damage, float weight, Types type) {
    this->name = name;
    this->damage = damage;
    this->weight = weight;
    this->type = type;
};

Weapon::Weapon() : Weapon("Нож", 1, .1f, ONEHANDED) {};

Weapon::~Weapon() {
    //outputData();
    //cout << " // deleted" << endl;
};

void Weapon::outputData() {
    cout << "Weapon :" <<
        " name - " << name <<
        ", damage - " << damage <<
        ", weight - " << weight <<
        ", type - " << type;
};

bool Weapon::isImposibleLift(float maxWeight) {
    if (maxWeight < weight) return true;
    return false;
};

float Weapon::sumWeights(float addWeight) {
    return (weight + addWeight);
};

float Weapon::sumWeights(Weapon* transferablWeapon) {
    return sumWeights((*transferablWeapon).weight);
};

string Weapon::getName() {
    return name;
};

float Weapon::getDamage() {
    return damage;
};

float Weapon::getWeight() {
    return weight;
};

void Weapon::setDamage(float newDamage) {
    damage = newDamage;
};

Weapon::Types Weapon::getType() {
    return type;
};
