#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int firstNum = n / 1000;
    int secondNum = n % 1000 / 100;
    int thirdNum = n % 100 / 10; 
    int lastNum = n % 10;

    if ((firstNum + lastNum) == (secondNum - thirdNum)) {
        cout << "ДА";
    } else {
        cout << "НЕТ";
    }

    return 0;
}