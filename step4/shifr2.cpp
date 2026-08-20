#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int firstNum = n / 100;
    int secondNum = (n % 100) / 10;
    int lastNum = n % 10;

    cout << "Число " << n << " является кодом " << secondNum  << lastNum  <<  firstNum << ".";
    return 0;
}