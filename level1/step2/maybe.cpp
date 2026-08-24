#include <iostream>

using namespace std;

int main() {
    int height = 0;
    cin >> height;

    if ((height > -50 && height <= -10) || (height > 15 && height <= 100)) {
        cout << "Высота " << height << " метров — в сложном, но допустимом диапазоне.";
    } 
    else {
        cout << "Высота " << height << " метров — вне сложного диапазона.";
    }

    return 0;
}