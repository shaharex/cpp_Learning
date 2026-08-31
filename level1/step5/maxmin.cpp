#include <iostream>

using namespace std;

int main() {
    long long height = 0;
    cin >> height;

    int max = 0;
    int min = 9; 
    while (height != 0) {
        int lastN = height % 10;
        height = height / 10;

        if (lastN > max) {
            max = lastN;
        } 
        if (lastN < min) {
            min = lastN;
        }
    }

    cout << "Максимальная цифра равна " << max << endl;
    cout << "Минимальная цифра равна " << min << endl;
}