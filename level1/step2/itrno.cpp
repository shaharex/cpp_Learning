#include <iostream>

using namespace std;

int main() {
    bool has_weapon = false;
    bool has_armor = false;
    bool has_shield = false;
    bool has_magic = false;
    bool has_potion = false;
    bool is_wounded = false;
    bool has_healing = false;
    bool is_afraid = false;

    int power = 0;


    cout << "Есть оружие? 1 — да, 0 — нет: ";
    cin >> has_weapon;
    cout << "Есть броня? 1 — да, 0 — нет: ";
    cin >> has_armor;
    cout << "А щит? 1 — да, 0 — нет: ";
    cin >> has_shield;
    cout << "Владеете магией? 1 — да, 0 — нет: ";
    cin >> has_magic;
    cout << "Может, зелье есть? 1 — да, 0 — нет: ";
    cin >> has_potion;
    cout << "Ранены? 1 — да, 0 — нет: ";
    cin >> is_wounded;
    cout << "Уже лечитесь? 1 — да, 0 — нет: ";
    cin >> has_healing;
    cout << "Испуганы? 1 — да, 0 — нет: ";
    cin >> is_afraid;


    // 1. Вооружённость
    if (has_weapon) {
        power += 10;
    } else {
        power -= 5;
    }

    // 2. Броня
    if (has_armor && has_shield) {
        power += 20;
    } else if (!has_armor && !has_shield) {
        power -= 10;
    }

    // 3. Магия
    if (has_magic || has_potion) {
        power += 15;
    }

    // 4. Состояние
    if (is_wounded && !has_healing) {
        power -= 20;
    }

    // 5. Боевой дух
    if (is_afraid) {
        power -= 10;
    } else {
        power += 5;
    }

    cout << "Боевая сила персонажа: " << power << std::endl;
    return 0;
}