#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x = 0;
    cin >> x;
    
    long long xInt = x;
    double xPoint = abs(x - xInt);
    
    cout << fixed << setprecision(4);
    cout << "Дробная часть: " << xPoint;


    return 0;
}