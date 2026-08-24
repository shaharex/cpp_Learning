#include <iostream>

using namespace std;

int main() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    cin >> x1 >> y1 >> x2 >> y2;

    // 4 4    1 1    2 2
    // 5 5    3 3    2 3
    // YES    NO     YES

    // horizontal, vertical 
    bool x2x1 = x2 - x1 == 1 || x2 - x1 == 0 || x2 - x1 == -1; 
    bool y2y1 = y2 - y1 == 1 || y2 - y1 == 0 || y2 - y1 == -1;
    // bool y2x1 = y2 - x1 == 1 || y2 - x1 == 0 || y2 - x1 == -1;
    // bool x2y1 = x2 - y1 == 0 || x2 - y1 == 1 || x2 - y1 == -1;


    if (x2x1 && y2y1) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}