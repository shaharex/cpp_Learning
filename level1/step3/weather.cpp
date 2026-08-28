#include <iostream>

using namespace std;

int main() {
    int weather = 0;
    cin >> weather;

    string weatherGood = weather == 1 ? "Решение: Остаться в лагере" : "Решение: Подниматься на вершину";
    cout << weatherGood << endl;
}