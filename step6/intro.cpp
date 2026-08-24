#include <iostream>

using namespace std;

int main() {
    char letter = 'A';
    cout << "Символ: " << letter << endl;
    cout << "Его ASCII-код: " << int(letter) << endl;
    cout << "ASCII-код следующего символа: " << int(letter) + 1 << endl;
    cout << "Cледующий символ: " << char(int(letter) + 1) << endl;

    return 0;
}