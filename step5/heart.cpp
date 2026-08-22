#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x = 0;
    cin >> x;

    // x - сердечное сокращение(точное время между двумя ударами) 
    // x - мс(миллисекунда) -> пульс в ударах в минуту (уд/мин).

    // 800.00 мс -> s секунд
    double s = x * .001;
    double beatsPerMinute = (double)60 / s;
    cout << fixed << setprecision(2);
    cout << "Пульс: " << beatsPerMinute << " уд/мин" << endl;

    return 0;
}