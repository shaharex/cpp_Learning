#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    double R = 0;
    double r = 0;
    double h = 0;
    double d = 0;
    string s = "";

    cin >> R >> r >> h >> d;
    cin.ignore();
    getline(cin, s);

    double V = ((double)1/(double)3) * 3.14159 * h * (R * R + R * r + r * r);
    double l = sqrt(h * h + ((R - r) * (R - r)));
    double S = 3.14159 * (R + r) * l;
    double campQuantity = S / d;

    cout << "Горный склон:\n";
    cout << fixed << setprecision(2);
    cout << "- Объём: " << V << endl;
    cout << "- Площадь поверхности: " << S << endl;
    cout << "- Количество палаток: " << (int)campQuantity << endl;
    cout << "- Гора: " << s << endl;

    return 0;
}