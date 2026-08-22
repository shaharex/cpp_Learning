#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double u = 0;
    double d = 0;

    cin >> u >> d;

    double upCalorie = u * 500;
    double downCalorie = d * 300;
    double overallCalorie = upCalorie + downCalorie;
    cout << fixed << setprecision(2);
    cout << "Общие энергозатраты: " << overallCalorie << " ккал" << endl;
    return 0;


}