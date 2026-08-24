#include <iostream>

using namespace std;

int main() {
    int h = 0;
    
    cin >> h;

    int dig = h / 1000;

    if (dig > 0 && dig <= 9) {
        bool divBy7 = (h % 7) == 0;
        bool divBy17 = (h % 17) == 0;
        if (divBy17 || divBy7) {
            cout << "Высота " << h << " метров — красивая!";
        } else {
            cout << "Высота " << h << " метров — не красивая.";
        }
    } else {
        cout << "Высота " << h << " метров — не красивая.";
    }

    return 0;
}