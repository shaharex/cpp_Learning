#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x = 0;
    cin >> x;
    
    int xInt = x;
    double xPoint = abs(x - xInt) * 10;
    int xFinal = static_cast<int>(xPoint);
    

    cout << "Первая цифра дробной части: " << xFinal;


    return 0;
}