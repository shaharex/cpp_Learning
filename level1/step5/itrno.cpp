#include <iostream>

using namespace std;

int main() {
    int current_coin = -1;
    int chest = 0;
    bool continue_loop = true;
    do {
        cout << "Введите номинал монеты: ";
        cin >> current_coin;
        if (current_coin == 0) continue_loop = false;
        else chest += current_coin;
    } while (continue_loop);
    cout << "Сумма награбленного: " << chest;
    return 0;
}