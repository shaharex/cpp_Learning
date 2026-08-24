#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int id = 0;
    double h = 0;
    cin >> id;
    cin >> h;

    cout << "Вершина:" << setw(20) << setfill(' ') << id << endl;
    cout << "Высота:" << setw(10) << setfill(' ') << h << " м" << endl;

    return 0;
}