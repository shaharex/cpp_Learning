#include <iostream>
#include <string> // <- помогает работать со строками

using namespace std;

int main() {
    string name = ""; // Не забываем инициализацию
    cout << "Привет, как тебя зовут?" << endl;
    cin >> name;
    cin.ignore(); // Запоминаем, забывать имя сразу же после знакомства невежливо
    cout << "Приятно познакомиться, " << name << "!" << "\n\n";

    string fullname = "";
    cout << "Now, tell me your full name" << endl;
    getline(cin,fullname);
    cout << "Glad to meet you, sir " << fullname << "!" << endl;

    return 0;
}
