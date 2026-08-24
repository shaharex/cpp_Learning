#include <iostream>

using namespace std;

int main() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    cin >> x1 >> y1 >> x2 >> y2;

    bool x2x1 = x2 - x1 <= 2 && x2 - x1 >= -2 && x2 - x1 != 0;
    bool y2y1 = y2 - y1 <= 2 && y2 - y1 >= -2 && y2 - y1 != 0;
    bool isEqual = abs(x2 - x1) == abs(y2 - y1);

    if (x2x1 && y2y1 && !isEqual) {
        cout << "Прыжок возможен!";
    } else {
        cout << "Прыжок невозможен.";
    }

    return 0;
}