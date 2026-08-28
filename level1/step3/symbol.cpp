#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	char s;
    double num1 = 0;
    double num2 = 0;
    cin >> s >> num1 >> num2;

    switch (s) {
        case '+':
            cout << fixed << setprecision(2);
        	cout << "Результат: " << num1 + num2 << endl;
        	break;
        case '-':
            cout << fixed << setprecision(2);
        	cout << "Результат: " << num1 - num2 << endl;
        	break;
        case '*':
            cout << fixed << setprecision(2);
        	cout << "Результат: " << num1 * num2 << endl;
        	break;
        case '/':
            cout << fixed << setprecision(2);
        	cout << "Результат: " << num1 / num2 << endl;
        	break;
        default:
        	cout << "ERROR!" << endl;
    }
    
    return 0;
}