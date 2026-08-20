#include <iostream>

using namespace std;

int main() {
    int value = 0;
    cin >> value;
    int valuePlus = value + 1;
    int valueMinus = value - 1;
    cout << "После ступени " << value << " следует ступень " << valuePlus << "." << endl;
    cout << "Перед ступенью " << value << " расположена ступень " << valueMinus << "." << endl;

    return 0;
}