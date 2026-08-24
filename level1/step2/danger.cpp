#include <iostream>

using namespace std;

int main() {
    int height = 0;
    cin >> height;

    if (height > -22 && height <= 253) {
        cout << "Высота " << height << " метров — безопасная.";
    } else {
        cout << "Высота " << height << " метров — опасная!";
    }

    return 0;
}