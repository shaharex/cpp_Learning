#include <iostream>

using namespace std;

int main() {
    char startingLetter;
    char endingLetter;

    cin >> startingLetter >> endingLetter;

    int centralLetter = (int(startingLetter) + int(endingLetter)) / 2;
    int distance = abs(int(endingLetter) - int(startingLetter));

    cout << "Начальный символ: " << startingLetter << endl;
    cout << "Конечный символ: " << endingLetter << endl;
    cout << "---\n";
    cout << "Центральный символ: " << char(centralLetter) << endl;
    cout << "Дистанция: " << distance << endl; 

    return 0;
}