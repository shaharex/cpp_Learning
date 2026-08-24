#include <iostream>

using namespace std;

int main() {
    char s;
    int n = 0;
    cin >> s >> n;

    int dipason = (int(s) - 32 + n) % 94;
    cout << dipason << endl;
    cout << "Исходный символ: " << s << " (код: " << int(s) << ")" << endl;
    cout << "Новый символ: " << char(dipason + 32) <<  " (код: " << dipason + 32 << ")" << endl;

    return 0;
}