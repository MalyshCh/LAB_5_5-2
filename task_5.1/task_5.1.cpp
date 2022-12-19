#include <iostream>
#include <Windows.h>
#include "Weapon.h"
#include "WeaponMagic.h"

struct User { // 5.1.4

    unsigned int id;
    string login;
    string password;

    void coutUserData() { // 5.1.5
        cout << "User data: id - " << id <<
            ", login - " << login <<
            ", password - " << password;
    };
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "5 Лабораторная работа. Вопрос 1." << endl;

    // 1. Создайте перечисление со следующими типами оружия:
    // ONEHANDED(одноручное), TWOHANDED(двуручное), BOW(лук),
    // CROSSBOW(арбалет).

    // 2. Добавьте в класс оружия ещё одну private - переменную
    // с типом перечисления. Безусловно, поменяйте и конструкторы, а также
    // добавьте GET - метод.

    // 3. В функции main, используя if, выведите текстовое представление типа
    // оружия у объекта. Например, если оно равно ONEHANDED, то в консоли должно
    // быть написано : "Одноручное оружие".

    Weapon knife;
    Weapon::Types type = knife.getType();
    if (type == Weapon::Types::ONEHANDED) cout << "Одноручное оружие";
    else if (type == Weapon::Types::TWOHANDED) cout << "Двуручное оружие";
    else if (type == Weapon::Types::BOW) cout << "Лук";
    else if (type == Weapon::Types::CROSSBOW) cout << "Арбалет";
    cout << endl;

    // 4. Создайте структуру игрока со следующими переменными:
    // id (уникальный идентификатор), логин и пароль.

    // 5. Добавьте функцию в структуру, которая выводит все данные в консоль.

    // 6. Протестируйте созданную структуру, присвоив значения всем полям
    // и вызвав созданную функцию.

    User user1;
    user1.id = 1;
    user1.login = "user1_login";
    user1.password = "user1_password";

    User user2 = {2, "user2_login", "user2_password" };

    user1.coutUserData();
    cout << endl;
    user2.coutUserData();
    cout << endl;

    // 7. Создайте дочерний класс от класса оружия, который будет отвечать
    // за магическое оружие.

    // 8. Добавьте в созданный класс private - поле, отвечающее за
    // дополнительный урон.

    // 9. Объявите 2 конструктора у созданного класса : с параметрами и без.

    // 10. Создайте GET - метод для созданного поля.

    // 11. Протестируйте созданный класс, его конструкторы и методы
    // (в том числе, и те, что пришли из родительского класса).

    WeaponMagic magicStaff;
    cout << "Магическое оружие стандартное" << endl;
    magicStaff.outputData();
    cout << ", магический урон - " << magicStaff.getExtraDamage() << endl;
    type = magicStaff.getType();
    if (type == Weapon::Types::ONEHANDED) cout << "Одноручное оружие";
    else if (type == Weapon::Types::TWOHANDED) cout << "Двуручное оружие";
    else if (type == Weapon::Types::BOW) cout << "Лук";
    else if (type == Weapon::Types::CROSSBOW) cout << "Арбалет";
    cout << endl;

    WeaponMagic amberCrossbow = WeaponMagic("Янтарный Арбалет", 2, 3.25, Weapon::CROSSBOW, 1.75);
    cout << "Магическое оружие по параметрам" << endl;
    amberCrossbow.outputData();
    cout << ", магический урон - " << amberCrossbow.getExtraDamage() << endl;
    type = amberCrossbow.getType();
    if (type == Weapon::Types::ONEHANDED) cout << "Одноручное оружие";
    else if (type == Weapon::Types::TWOHANDED) cout << "Двуручное оружие";
    else if (type == Weapon::Types::BOW) cout << "Лук";
    else if (type == Weapon::Types::CROSSBOW) cout << "Арбалет";
    cout << endl;

    cout << "Hello World!" << endl;
}
