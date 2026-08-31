#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        int dCount = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                dCount++;
            }
        }
        if (dCount == 2) {
            cout << i << endl;
        }
    }



    return 0;
}