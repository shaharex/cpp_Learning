#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double V1 = 0;
    double V2 = 0;
    double S = 0;
    cin >> V1;
    cin >> V2;
    cin >> S;

    double T = S / (V1 + V2);
    cout << fixed << setprecision(2);
    cout << "Время до встречи: " << T << " ч";

    return 0;
}