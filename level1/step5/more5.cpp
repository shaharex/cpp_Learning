#include <iostream>

using namespace std;

int main() {
    int n = 0;

    int fiveCount = 0;
    bool stop = true;

    while (cin >> n) {
        if ((n > 5 || n < 1) && stop) {
            stop = false;
            cout << "Количество пятёрок: " << fiveCount << endl;
        } else if (n == 5) {
            fiveCount++;
        }
    }

    return 0;
}