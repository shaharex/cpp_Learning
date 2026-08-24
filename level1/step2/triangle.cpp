#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a == b && b == c) {
        cout << "Тип скалы: Равносторонний" << endl;
    } 
    else if (a == b || b == c || a == c) {
        cout << "Тип скалы: Равнобедренный" << endl;
    }
     else if (a != b && b != c) {
        cout << "Тип скалы: Разносторонний" << endl;
    }
    return 0;
}