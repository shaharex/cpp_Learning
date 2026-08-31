#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;


    while (n != 0) {
        int lastN = n % 10;
        cout << lastN << endl;
        n = n / 10;
    }

    return 0;
}