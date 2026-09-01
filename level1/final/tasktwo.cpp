#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    double height = 0;
    int hp = 1000;
    int levelCount = 0;

    while (n != 0)
    {
        double levelHeight = 0;
        int levelDifficulty = 0;
        cin >> levelHeight >> levelDifficulty;
        n--;
        levelCount++;

        if (levelDifficulty == 10)
        {
            cout << "Уровень " << levelCount << " слишком сложный. Пропускаем." << endl;
            continue;
        }
        hp -= (levelDifficulty * 10);
        if (hp < 0)
        {
            cout << "Восхождение прервано на уровне " << levelCount << "." << endl;
            cout << fixed << setprecision(2);
            cout << "Пройдено высоты: " << height << " м" << endl;
            break;
        }
        height += levelHeight;

    }

    if (hp >= 0)
    {
        cout << "Поздравляем! Вы достигли вершины!\n";
        cout << fixed << setprecision(2);
        cout << "Общая высота: " << height << " м" << endl;
        cout << "Остаток выносливости: " << hp << " единиц" << endl;
    }

    return 0;
}
