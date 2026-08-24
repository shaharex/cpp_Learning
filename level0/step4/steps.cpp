#include <iostream>

using namespace std;

int main() {
    int S = 0;
    int D = 0;
    int N = 0;
    cin >> S >> D >> N;
    int sWithoutD = S - D;
    int dayDiff = D - N;
    int dayFloored = (sWithoutD + dayDiff - 1) / dayDiff;
    int daysFinal = dayFloored + 1;

    cout <<  "Группа достигнет вершины на " << daysFinal << " день." << endl;

    return 0;
}