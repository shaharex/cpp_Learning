#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string user_response;
    string secret_code = "Слонопотамы идут на свист"; // Секретный пароль, после которого слонопродавец отстанет
    cout << "- Привет! Купи слона!" << endl;

    while (true) {
        cout << "- ";
        getline(cin, user_response);
        if (user_response == secret_code) { // Проверяем, что строка совпадает с паролем
            cout << "Ну так бы сразу";
            break; // Вы свобооодны!  
        }
        cout << "- Все говорят: '";
        cout << user_response;
        cout << "', а ты купи слона!" << endl;
    }

    return 0;
}