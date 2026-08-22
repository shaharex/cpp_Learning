#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double C = 0;
    cin >> C;

    double F = (C * ( (double)9 / (double)5 )) + 32;
    cout << fixed << setprecision(1);
    cout << "Температура в Фаренгейтах: " << F << "°F" << endl;
    return 0;
}