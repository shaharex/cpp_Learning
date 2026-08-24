#include <iostream>
#include <locale>



using namespace std;

int main() {
    setlocale(LC_ALL, ""); // Устанавливаем локаль для корректного вывода. Сработает, если у вас русскоязычная ОС, иначе нужно указать явно
    char32_t emojiHappy= L'😛';
    wchar_t russianLetter = L'Ы';
    char32_t emojiUnknown = char32_t((int)emojiHappy +1);
    wcout << L"Вот буква: " << russianLetter << endl;
    wcout << L"Вот следующая буква: " << wchar_t((int)russianLetter +1) << endl;
    wcout << L"Вот эмодзи: " << emojiHappy << endl;
    wcout << L"Вот следующее эмодзи: " << emojiUnknown << endl;

    return 0;
}