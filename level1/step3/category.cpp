#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    switch (n) {
        case 1:
            cout << "Рекомендуемое снаряжение: базовое снаряжение" << endl;
            break;
        case 2:
            cout << "Рекомендуемое снаряжение: среднее снаряжение" << endl;
            break;
        case 3:
            cout << "Рекомендуемое снаряжение: профессиональное снаряжение" << endl;
            break;
        case 4:
            cout << "Рекомендуемое снаряжение: экспедиционное снаряжение" << endl;
            break;
    }

    return 0;
}