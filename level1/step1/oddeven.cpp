#include <iostream>

using namespace std;

int main() {

    long long step = 0;
    cin >> step;

    if (step % 2 == 0) {
        cout << "Чётный уступ. Можно двигаться уверенно!";
    } else {
        cout << "Нечётный уступ. Будьте осторожны!";
    }

    return 0;
}