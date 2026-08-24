#include <iostream>

using namespace std;

int main() {

    double averageGrade = 0;
    double attendacePercentage = 0;
    cin >> averageGrade >> attendacePercentage;

    if (averageGrade >= 4.5 && attendacePercentage >= 90) {
        cout << "Поздравляю, ты получишь стипендию!" << endl;
    } else {
        cout << "К сожалению, стипендия не светит." << endl;
    }

    return 0;
}