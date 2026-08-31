#include <iostream> 

using namespace std;

int main() {
    int n = 0;
    bool stopOut = true;

    while (cin >> n) {
        if (n % 7 == 0 && stopOut) {
            cout << n << endl;
        } else {
            stopOut = false;
        }
    }

    return 0;
}