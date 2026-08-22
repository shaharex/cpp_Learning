#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double h = 0.0;
    double belowM = 20.0;
    cin >> h;

    double fallCount = h / 100;
    double finalTemp = belowM - (fallCount * 0.6);
    cout << fixed << setprecision(1);
    cout << "Температура на вершине: " << finalTemp  << "°C" << endl;

}