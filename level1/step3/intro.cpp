#include <iostream>

using namespace std;

int main() {
    int left_motor = 0;
    int right_motor = 0;

    char value_from_controller;
    cout << "Команда: ";  // Мы пока не умеем подключаться к телефону, так что введите команду сами
    cin >> value_from_controller;

    switch (value_from_controller) { // Указываем, какую переменную проверяем
        case 'w':
            left_motor = 1;
            right_motor = 1;
            break;
        case 's':
            left_motor = -1;
            right_motor = -1;
            break;
        case 'a':
            left_motor = -1;
            right_motor = 1;
            break;
        case 'd':
            left_motor = 1;
            right_motor = -1;
            break;
    }
    cout << ((left_motor == -1) ?  "Левое колесо вращается назад" : "Левое колесо вращается вперёд") << endl;
    cout << ((right_motor == -1) ?  "Правое колесо вращается назад" : "Правое колесо вращается вперёд") << endl;
}