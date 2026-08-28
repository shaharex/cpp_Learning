#include <iostream>

using namespace std;

int main() {
    int month = 0;
    cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "Количество дней: " << 31 << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "Количество дней: " << 30 << endl;
            break;
        case 2: 
            cout << "Количество дней: " << 28 << endl;
            break;

        }
    
    return 0;
}