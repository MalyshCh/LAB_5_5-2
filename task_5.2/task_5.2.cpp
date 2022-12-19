#include <iostream>
#include <Windows.h>
#include "Weapon.h"
#include "WeaponMagic.h"

bool operator > (Weapon item1, Weapon item2) { // 5.2.4
    return item1.getDamage() > item2.getDamage();
};

bool operator < (Weapon item1, Weapon item2) { // 5.2.4
    return item1.getDamage() < item2.getDamage();
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "5 Лабораторная работа. Вопрос 2." << endl;

    // 1. Сделайте метод, возвращающий урон от оружия, виртуальным.

    // 2. Переопределите этот метод в дочернем классе так, чтобы 
    // возвращалась сумма урона от оружия и дополнительного урона 
    // (всё - таки это магическое оружие).

    // 3 Проверьте, что объект магического оружия возвращает урон, 
    // как сумму базового урона (который идёт из базового класса) 
    // и дополнительного урона (который идёт из класса магического 
    // оружия).

    Weapon knife;
    knife.outputData();
    cout << endl << "Damage (damage) - " << knife.getDamage() << endl;

    WeaponMagic magicStaff;
    magicStaff.outputData();
    cout << endl << "Damage (damage + extraDamage) - " << magicStaff.getDamage() << endl;

    // 4. Переопределите оператор > и <, которые будут сравнивать 
    // оружие по урону. То есть то оружие больше, которое имеет 
    // больший урон. Само значение урона получайте только через 
    // соответствующую функцию (поскольку, например, урон у 
    // магического оружия - это не просто поле, а сумма двух полей).

    // 5. Проверьте работу операторов > и < , сравнивая разные 
    // экземпляры оружия и магического оружия.

    Weapon axe = Weapon("Топор", 7, 5, Weapon::TWOHANDED);
    WeaponMagic amberCrossbow = WeaponMagic("Янтарный Арбалет", 2, 3.25, Weapon::CROSSBOW, 1.75);

    axe.outputData();
    cout << endl;
    amberCrossbow.outputData();
    cout << endl << "Урон больше у оружия - ";
    if (axe > amberCrossbow) cout << axe.getName();
    else cout << amberCrossbow.getName();
    cout << endl;
    cout << "Сравним " << knife.getName() << " и " << magicStaff.getName() <<
        " : урон меньше у оружия - ";
    if (knife < magicStaff) cout << knife.getName();
    else cout << magicStaff.getName();
    cout << endl;

    cout << "Hello World!" << endl;
}