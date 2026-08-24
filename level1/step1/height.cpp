#include <iostream>

using namespace std;

int main() {
    int h1 = 0;
    int h2 = 0;
    int h3 = 0;

    cin >> h1 >> h2 >> h3;

    int height = 0;

    if (h1 > 0) {
        height += h1;
    }
    if (h2 > 0) {
        height += h2;
    }
    if (h3 > 0) {
        height += h3;
    }
    
    cout << height << endl;
    return 0;
}