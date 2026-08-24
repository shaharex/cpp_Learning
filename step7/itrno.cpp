#include <iostream>
#include <string>
#include <locale>


using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); // Устанавливаем локаль для работы с русскими символами

    wstring word = L"", secret = L"";
    int length;

    wcout << L"Введи слово для шифровки: ";
    wcin >> word; // Читаем строку как wstring

    length = word.length();
    wcout << L"Длина слова - " << length << endl;

    // Формируем зашифрованное слово
    secret += word[0];
    secret += word[length / 2];
    secret += word[length - 1];

    wcout << L"Зашифрованное слово: " << secret << endl;

    return 0;
}