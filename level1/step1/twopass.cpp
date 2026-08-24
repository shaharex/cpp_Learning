#include <iostream>

using namespace std;

int main() {
    string s1 = "";
    string s2 = "";
    cin >> s1 >> s2;

    if (s1 == s2) {
        cout << "Пароль принят. Готовы к восхождению!" << endl;
    } else {
        cout << "Пароль не принят. Проверьте страховку!" << endl;
    }

    return 0;
}