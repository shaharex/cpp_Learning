#include <iostream>

using namespace std;

int main() {
    int value = 0;
    cin >> value;
    int firstNumber = value / 10;
    int secondNumber = value % 10;
    int sumOfNums = firstNumber + secondNumber;
    int multipleOfNums = firstNumber * secondNumber;
    cout << sumOfNums << " " << multipleOfNums << endl; 
    return 0;
}