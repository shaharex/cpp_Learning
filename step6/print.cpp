#include <iostream>

using namespace std;

int main() {
    char letter;
    int n = 0;
    cin >> letter >> n;

    int move = int(letter) + 32 + n;
    char stroch = char(move);

    cout << "Итоговый символ команды: " << stroch;

    return 0;
}