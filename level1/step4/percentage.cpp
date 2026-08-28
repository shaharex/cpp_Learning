#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int m = 0;
    int p = 0;
    int n = 0;
    cin >> m >> p >> n;

    double a = m;
    for (int i =  1; i <= n; i++) {
        cout << fixed << setprecision(2);
        cout << "День " << i << ": " << a << "%\n"; 
        a = m * pow(1 + (p * 0.01), i);
    }

    return 0;
}