#include <iostream>

using namespace std;

int main() {
    int squats = 0;
    string user_color = "default"; // Стартовый цвет — стандартный
    while (user_color != "blue") { // Выполняем, пока цвет не станет синим
        squats++;
        if (squats > 100) { // На сотом приседании
            user_color = "blue"; // Начинаем синеть
        }
    }
    cout << "Я посинел на приседании № " << squats;
    return 0;
}