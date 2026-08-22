#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double h1 = 0.0;
    double d1 = 0.0;
    double t1 = 0.0;
    double h2 = 0.0;
    double d2 = 0.0;
    double t2 = 0.0;

    cin >> h1;
    cin >> d1;
    cin >> t1;
    cin >> h2;
    cin >> d2;
    cin >> t2;

    double t2ToHour = t2 / 60; 
    double pathOne = sqrt(h1 * h1 + d1 * d1);
    double pathTwo = sqrt(h2 * h2 + d2 * d2);
    double averageSpeed = (pathOne + pathTwo) / (t1 + t2ToHour);

    double downSpeed = (averageSpeed * 0.4) + averageSpeed;
    double downTime = (pathOne + pathTwo) / downSpeed;
    cout << fixed << setprecision(2);
    cout << "Средняя скорость восхождения: " << averageSpeed << " м/ч. Прогноз времени спуска: " << downTime << " ч." << endl;

}