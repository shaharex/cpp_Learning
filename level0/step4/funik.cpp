#include <iostream>
using namespace std;

int main() {
    int value = 0;
    cin >> value;
    int cabins = (value + 2 - 1) / 2;
    cout << cabins << endl;
    return 0;
}