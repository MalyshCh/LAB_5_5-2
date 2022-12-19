#include <iostream>
#include <Windows.h>
#include "Weapon.h"
#include "WeaponMagic.h"
#include "WeaponOneOff.h"

template <typename HandLeft, typename HandRight> // 5-2.9
class WhichHand {
private:
    HandLeft left;
    HandRight right;
public:

    WhichHand(HandLeft left, HandRight right) { // 5-2.10
        this->left = left;
        this->right = right;
    }

    WhichHand() {}; // 5-2.10

    HandLeft getHandLeft() { // 5-2.10
        return left;
    }

    HandRight getHandRight() { // 5-2.10
        return right;
    }

    void setHandLeft(HandLeft item) { // 5-2.10
        left = item;
    }

    void setHandRight(HandRight item) { // 5-2.10
        right = item;
    }

};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "5-2 Лабораторная работа. Вопрос 1." << endl;

    // 1. Сделайте класс оружия абстрактным, объявив чисто виртуальную 
    // функцию Attack.

    // 2. В классе магического оружия реализуйте эту функцию, выведя 
    // в консоль : "Атакуем магическим оружием".

    // 3. Убедитесь, что компилятор не даёт создать экземпляр абстрактного 
    // класса.

    // Weapon item1;
    /* 
    error : C++ использование объекта абстрактного типа класса 
    "Weapon" не допускается: функцию "Weapon::attack" является чистой 
    виртуальной функцией
    */ 

    // 4. Создайте экземпляр магического оружия (если он не создан) и 
    // вызовите метод Attack у него.

    WeaponMagic elvenSword = WeaponMagic("Эльфийский Меч", 3, 4.1f, Weapon::ONEHANDED, 2.15f);
    elvenSword.outputData();
    cout << endl;
    elvenSword.attack();
    cout << endl;

    // 5. Создайте ещё один дочерний класс от оружия, который будет 
    // отвечать за одноразовое оружие.

    // 6. Добавьте поле - флаг, которое будет содержать true, если 
    // оружие уже было использовано и false, если ещё не было.

    // 7. В функции Attack, если оружие уже было использовано, то выведите 
    // в консоль: "Оружие уже было использовано". Если же оружие ещё не 
    // было использовано, то вывести: "Атакуем одноразовым оружием" и 
    // установить флаг использования оружия в значение true.

    // 8. Создайте экземпляр класса одноразового оружия и дважды вызовите 
    // метод Attack. Убедитесь, что всё работает правильно.

    WeaponOneOff arrowFerrum = WeaponOneOff("Стрела железная", 2, 0.2f, Weapon::ONEHANDED);
    arrowFerrum.outputData();
    cout << endl;
    arrowFerrum.attack();
    cout << endl;
    arrowFerrum.attack();
    cout << endl;

    WeaponOneOff arrowTree;
    arrowTree.outputData();
    cout << endl;
    arrowTree.attack();
    cout << endl;
    arrowTree.attack();
    cout << endl;

    // 9. Создайте шаблон класса (с двумя параметрами), отвечающий за 
    // хранение оружие в левой руке и в правой. Типы оружия как раз и 
    // должны быть шаблонами.

    // 10. Сделайте конструктор для данного класса, а также GET и SET 
    // методы для обоих переменных.

    // 11. Проверьте работу шаблона (конструктора и методов), передав и тип 
    // оружия, и просто целый тип данных (например, это могут быть id 
    // оружия из какой - нибудь базы данных).

    WeaponMagic amberCrossbow = WeaponMagic("Янтарный Арбалет", 2, 3.25, Weapon::CROSSBOW, 1.75);
    WeaponMagic magicStaff;

    WhichHand<WeaponMagic, WeaponMagic> item1 = { magicStaff, magicStaff };
    item1.setHandLeft(amberCrossbow);

    WhichHand<WeaponMagic, WeaponMagic> item2;
    item2.setHandLeft(elvenSword);

    WeaponMagic itemWeapon = item1.getHandLeft();
    cout << "В левой руке Персонажа #1 - " << itemWeapon.getName() << endl;
    cout << "В левой руке Персонажа #2 - " << item2.getHandLeft().getName() << endl;

    cout << "Hello World!" << endl;
}
