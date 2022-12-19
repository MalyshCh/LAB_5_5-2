#pragma once
#include <iostream>

using namespace std;

class Weapon {

    friend class Characteristic;

public:

    enum Types
    {
        ONEHANDED,  // ����������
        TWOHANDED,  // ���������
        BOW,        // ���
        CROSSBOW    // �������
    };

    Weapon(string name, float damage, float weight, Types type);

    Weapon();

    ~Weapon();

    virtual void outputData();

    bool isImposibleLift(float maxWeight);

    float sumWeights(float addWeight);

    float sumWeights(Weapon* transferablWeapon);

    string getName();

    virtual float getDamage(); // 5.2.1

    float getWeight();

    void setDamage(float newDamage);

    Types getType();

private:

    string name;
    float damage;
    float weight;
    Types type;
};
