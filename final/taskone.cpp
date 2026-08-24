#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double r = 0;
    double h = 0;
    double d = 0;
    string s = "";

    cin >> r >> h >> d >> s;

    double V = 3.14159 * r * r * h;
    double bottleCount = V / d;

    cout << fixed << setprecision(2);
    cout << "Объём бочки: " << V << ", фирмы: " << s << endl;
    cout << "Количество бутылок: " << (int)bottleCount << endl;

    return 0;
}