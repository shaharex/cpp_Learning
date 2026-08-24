#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long i = 0;
    double h = 0;
    long long d = 0;
    cin >> i >> h >> d;

    cout << "Вершина: " << setw(20) << setfill(' ') << i << endl;
    cout << fixed << setprecision(2);
    cout << "Высота: "  << setw(10) << setfill(' ') << h  << " м" << endl ;
    cout << "Код сложности (hex): " << hex << d << endl;

    return 0;
}