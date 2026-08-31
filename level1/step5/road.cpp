#include <iostream>

using namespace std;

int main() {
    string stopW = "КОНЕЦ";
    bool continuePrint = true;
    string W;

    while (cin >> W) {
        if (continuePrint && W != stopW) {
            cout << W << endl;
        } else {
            continuePrint = false;
        }
    }

    return 0;
}