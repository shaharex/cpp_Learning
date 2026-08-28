#include <iostream>

using namespace std;

int main() {
    const int total_holds = 100; // Всего зацепов
    int position; // Начальная позиция
    int delta = 1;
    for (position = 1; position < total_holds; position += delta) {
        cout << "Альпинист на зацепе: " << position << endl;

        char hold_color;
        cout << "Введите цвет зацепа (w — белый, b — синий, r — красный): ";
        cin >> hold_color;

        if (hold_color == 'b') {
            delta = 2; // Перескакиваем через один
        } else if (hold_color == 'r') {
            delta = 3; // Перескакиваем через два
        } else {
            delta = 1; // Обычный зацеп
        }
    }

    cout << "Альпинист достиг вершины!" << endl;
    return 0;
}