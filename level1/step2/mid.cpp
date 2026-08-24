#include <iostream>

using namespace std;

int main() {
    int h1 = 0;
    int h2 = 0;
    int h3 = 0;

    cin >> h1 >> h2 >> h3;

    int mid = 0;

    if ((h1 < h2 && h1 > h3) || (h1 < h3 && h1 > h2)) {
        mid = h1;
    } else if ((h2 < h1 && h2 > h3) || (h2 < h3 && h2 > h1)) {
        mid = h2;
    } else if ((h3)) {
        mid = h3;
    }

    cout << "Средняя высота: " << mid << " метров. ";
 
    return 0;
}