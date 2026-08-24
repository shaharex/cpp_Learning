#include <iostream>

using namespace std;

int main() {
    char letter;
    cin >> letter;

    char newLetter = char(int(letter) - 32);

    cout << "Исходный символ: " << letter << "\n";
    cout << "Преобразованный символ: " << newLetter;

    return 0;
}