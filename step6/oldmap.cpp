#include <iostream>
#include <locale>

using namespace std;

int main() {
    // setlocale(LC_ALL, "");
    
    char position;
    int baseCode = 0;
    int moving = 0;
    cin >> position >> baseCode >> moving;

    cout << "--- Этап 1: Анализ текущей точки ---" << endl;
    cout << "Символ '" << position << "' имеет код: " << int(position) << "\n\n";
    cout << "--- Этап 2: Поиск следующей точки ---" << endl;
    cout << "Итоговый код: " << baseCode + moving << endl;
    cout << "Символ следующей точки: " << char(baseCode + moving) << endl;



    return 0;
}