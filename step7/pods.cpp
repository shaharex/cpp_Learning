#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, ""); // Устанавливаем локаль для работы с русскими символами

    wstring phrase = L"Лучше гор могут быть только горы, на которых ещё не бывал";
    wcout << L"Подстрока  c 21 символа, длиной 11: " << phrase.substr(21, 11) << endl;
    wcout << L"Подстрока `горы` начинается на символе с индексом: " << phrase.find(L"горы")<< endl;
    wcout << L"Подстрока `Высоцкий` начинается на символе с индексом: " << phrase.find(L"Высоцкий")<< endl;

    return 0;
}