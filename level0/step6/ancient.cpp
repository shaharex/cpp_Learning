#include <iostream>

using namespace std;

int main() {
    char symbol;
    int n = 0;
    cin >> symbol >> n;

    int dipason = (int(symbol) - 32 + n) % 95;
    cout << "Исходный символ: " << symbol << " (код: " << int(symbol) << ")" << endl;
    cout << "Новый символ: " << char(dipason + 32) <<  " (код: " << dipason + 32 << ")" << endl;

    return 0;
}