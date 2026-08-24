#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int groupNum = (n + 7 - 1) / 7;
    cout << n << " место - это " << groupNum << " группа";
    return 0;
}