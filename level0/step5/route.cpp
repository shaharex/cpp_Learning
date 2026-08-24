#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int id = 0;
    double l = 0;
    cin >> id;
    cin >> l;


    cout << "Маршрут №" << setw(5) << setfill(' ') << id << ": ";
    cout << fixed << setprecision(2);
    cout << setw(10) << setfill(' ') <<  l << " км" << endl;

    return 0;
}