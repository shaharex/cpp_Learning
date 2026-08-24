#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double h = 0.0;
    double convert = 3.28084;
    cin >> h;

    double result = convert * h;
    cout << fixed << setprecision(2);
    cout << "Высота в футах: " << result << endl;

    return 0;
}