#include <iostream>

using namespace std;

int main() {
    int victory_points_cards = 10;
    int bonus_cards = 5;
    int curse_cards = 3;
    int houses_cards = 2;
    bool has_houses_bonus = true;

    int final_points = victory_points_cards;

    if (bonus_cards) {
        cout << "Есть бонусные карты, добавляем " << bonus_cards * 2 << endl;
        final_points += bonus_cards * 2;
        cout << "Текущие очки: " << final_points << endl;

    }
    if (curse_cards) {
        cout << "Есть карты проклятий, вычитаем " << curse_cards * 5 << endl;
        final_points -= curse_cards * 5;
        cout << "Текущие очки: " << final_points << endl;
    }
    if (has_houses_bonus) {
        cout << "Есть бонусная карта. Добавляем " << houses_cards * 3 << endl;
        final_points += houses_cards * 3;
        cout << "Текущие очки: " << final_points << endl;
    }

    cout << "Подсчёт окончен. Итого: " << final_points << endl;
}

// Самый высокий приоритет у операции НЕ (она выполняется первой), 
// затем у И, а самый низкий — у ИЛИ. 
// Если приоритет нужно изменить, на помощь приходят скобки 
// (как в математике).