#include <iostream>

using namespace std;

int main() {
    int h1 = 0;
    int h2 = 0;

    cin >> h1 >> h2;
    
    int h = 0;

    if (h1 < h2) {
        h = h1;
    } else {
        h = h2;
    }

    cout << "Наименьшая высота: " << h << endl;

    return 0;
}