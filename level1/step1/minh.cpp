#include <iostream>

using namespace std;

int main() {
    int h1 = 0;
    int h2 = 0;
    int h3 = 0;
    int h4 = 0;

    cin >> h1 >> h2 >> h3 >> h4;

    int minH = 0;

    if (h1 < h2) {
        minH = h1;
    }
    else {
        minH = h2;
    }
    if (h3 < minH) {
        minH = h3;
    }
    // else {
    //     minH = minH;
    // }
    if (h4 < minH) {
        minH = h4;
    }
    // else {
    //     minH = minH;
    // }

    cout << "Наименьшая высота: " << minH << endl;
}