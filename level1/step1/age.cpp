#include <iostream>

using namespace std;

int main() {
    int age = 0;
    cin >> age;

    if (age <= 13) {
        cout << "детство";
    }
    if (age <= 24 && 14 <= age) {
        cout << "молодость";
    } 
    if (25 <= age && age <= 59) {
        cout << "зрелость";
    }
    if (60 <= age) {
        cout << "старость";
    }

    return 0;
}