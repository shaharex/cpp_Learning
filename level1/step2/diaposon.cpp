#include <iostream>

using namespace std;

int main() {
    int height = 0;
    cin >> height;

    if (height > -74 && height <= 23) {
        cout << "Высота " << height << " метров — в безопасном диапазоне.";
    } else {
        cout << "Высота " << height << " метров — за пределами безопасного диапазона.";
    }

    return 0;
}