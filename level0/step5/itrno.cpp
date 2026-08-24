#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a = 5, c = 0;
    float a_f = (float)a + 2.5f, c_f = 0;  // Я сказал, считай a как float!

    cout << fixed << setprecision(2) << a << endl;
    cout << fixed << setprecision(2) << a_f << endl;

    c = a + (int)a_f; // Отрежь дробную часть, как ниточку на одежде
    c_f = (float)a + a_f;

    cout << fixed << setprecision(2) << c << endl;
    cout << fixed << setprecision(2) << c_f << endl;

    return 0;
}