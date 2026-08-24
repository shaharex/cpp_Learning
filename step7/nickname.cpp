#include <iostream>
#include <string>

using namespace std;

int main() {

    string fullname = "";
    getline(cin, fullname);

    int length = fullname.length();

    cout << "Активация... Профиль создан.\n";
    cout << "Добро пожаловать, " << fullname << "!\n";
    cout << "Ваш личный позывной: ";
    cout << fullname[0] << "-" << fullname[length - 1] << "-" << length << endl;

    return 0;
}