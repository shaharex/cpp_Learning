#include <iostream>

using namespace std;

int main() {
    int year = 0;
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0) {
        cout << "Год " << year << " — высокий!";
    } else if (year % 400 == 0) {
        cout << "Год " << year << " — высокий!";
    } else {
        cout << "Год " << year <<  " — не высокий.";
    }

    return 0;
}