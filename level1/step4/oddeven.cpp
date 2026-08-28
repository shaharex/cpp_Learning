#include <iostream>

using namespace std;

int main() {
    int m = 0;
    int n = 0;
    cin >> m >> n;

    int start = (m % 2 == 1) ? m : m - 1;
    int end = (n % 2 == 1) ? n : n + 1;

    for (int i = start; i >= end; i -= 2) {
        cout << i << endl;
    }


    return 0;
}