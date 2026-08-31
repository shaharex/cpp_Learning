#include <iostream>

using namespace std;

int main() {
    int countOfSquats = 15;
    int correctCount = 0;
    for (int currentCount = 1; currentCount <= countOfSquats; currentCount++) {
        cout << "Приседание №" << currentCount << endl;
        if (currentCount % 5 == 0) {
            cout << "Вася делает вид, что присел. Тренер заметил!" << endl;
            continue; // Пропускаем подсчёт
        }
        correctCount++;
    }
    cout << "\nЗасчитано " << correctCount << " приседаний.";
    return 0;
}