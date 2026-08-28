#include <iostream>

using namespace std;

int main() {

    int weight = 0;
    cin >> weight;

    switch (weight) {
        case 60: case 61: case 62: case 63:
            cout << "Категория: Первый полусредний вес" << endl;
            break;
        case 64: case 65: case 66: case 67: case 68:
            cout << "Категория: Полусредний вес" << endl;
            break;
        default:
            cout << "Категория: Легкий вес" << endl;

    }

    return 0;
}