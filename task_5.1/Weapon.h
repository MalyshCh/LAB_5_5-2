#pragma once
#include <iostream>

using namespace std;

class Weapon {

    friend class Characteristic;

public:

    enum Types // 5.1.1
    {
        ONEHANDED,  // одноручное
        TWOHANDED,  // двуручное
        BOW,        // лук
        CROSSBOW    // арбалет
    };

    //Weapon(string name, float damage, float weight);
    Weapon(string name, float damage, float weight, Types type); // 5.1.2

    Weapon();

    ~Weapon();

    void outputData();

    bool isImposibleLift(float maxWeight);

    float sumWeights(float addWeight);

    float sumWeights(Weapon* transferablWeapon);

    string getName();

    float getDamage();

    float getWeight();

    void setDamage(float newDamage);

    Types getType(); // 5.1.2

private:

    string name;
    float damage;
    float weight;
    Types type; // 5.1.2
};
