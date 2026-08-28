#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int square = i * i;
        int lastNum = square % 10; 
        if (lastNum == 2 || lastNum == 5 || lastNum == 8) {
            sum += i;
        }
    }
    cout << "Сумма высот: " << sum << endl;

    return 0;
}