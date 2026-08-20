#include <iostream>

using namespace std;

int main() {
    int sStart = 0;
    int sDaily = 0;
    int n = 0;
    cin >> sStart;
    cin >> sDaily;
    cin >> n;
    int tillNDays = n - 1;
    int overallS = sStart - (tillNDays * sDaily);

    cout << "Запас на начало дня номер " << n << ": " << overallS << " граммов." << endl;


    return 0;
}