#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    cin >> a >> b >> c;

    int diffOne = b - a;
    int diffTwo = c - b;

    if (diffOne == diffTwo) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }



    return 0;
}