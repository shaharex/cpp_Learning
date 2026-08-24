#include <iostream>

using namespace std;

int main() {
    int value = 0;
    cout << "Введите число: ";
    cin >> value;
    cout << "Вы ввели: " << value << endl;
    value = value * 2;
    cout << "Значение, умноженное на два: " << value << endl;
    value += 5;
    cout << "Добавим к значению 5: " << value << endl;
    value -= 15;
    cout << "Вычитаем из значения 15: " << value << endl;
    int value_2 = value % 10;
    value = value / 10;
    cout << "Делим нацело на 10: " << value << ". Остаток от деления: " << value_2 << endl;
    return 0;
}