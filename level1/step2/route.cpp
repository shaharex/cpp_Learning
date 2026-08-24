#include <iostream>

using namespace std;

int main() {
    int difficulty = 0;
    int safety = 0;

    cin >> difficulty >> safety;

    if (difficulty > 7 && safety < 5) {
        cout << "Опасный маршрут!";
    } else if (difficulty > 7 && safety >= 5) {
        cout << "Экстремальный, но допустимый маршрут.";
    } else if (difficulty <= 7 && safety > 6) {
        cout << "Безопасный маршрут.";
    } else {
        cout << "Неподходящий маршрут.";
    }

    return 0;
}