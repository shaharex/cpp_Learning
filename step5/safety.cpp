#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a = 0;
    double h = 0;
    double lMax = 0;
    cin >> a;
    cin >> h;
    cin >> lMax;

    double load = (a * h) / 2;
    double lRemain = lMax - load;
    cout << fixed << setprecision(2);
    cout << "Расчетная нагрузка: " << load << " у.е. Запас прочности: " << lRemain << " у.е." << endl;

    return 0;
}