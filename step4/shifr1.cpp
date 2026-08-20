#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int desytichny = n * 10 + n;
    int sotki = n * 100 + desytichny;
    int resultSum = n  + desytichny + sotki;

    cout << "Число " << n << " является кодом " << resultSum << ".";
    return 0;
}