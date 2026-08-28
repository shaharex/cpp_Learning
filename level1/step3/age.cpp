#include <iostream>

using namespace std;

int main() {
    int age = 0;
    cin >> age;

    switch (age) {
        case 11: case 12: case 13: case 14:
            cout << "Мне " << age << " лет";
            break;
        default:
            int rem = age % 10;
            switch(rem) {
                case 2: case 3: case 4:
                    cout << "Мне " << age << " года";
                    break;
                case 1:
                    cout << "Мне " << age << " год";
                    break;
                default:
                    cout << "Мне " << age << " лет";

                }
    }         

    return 0;
}