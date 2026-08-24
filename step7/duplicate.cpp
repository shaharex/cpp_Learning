#include <iostream>
#include <string>

using namespace std;

int main() {
    string sOne = "";
    string sTwo = "";
    cin >> sOne >> sTwo;

    char lOne = sOne[0];
    char lTwo = sOne[1];
    char lThree = sOne[2];

    cout << lOne <<  lOne << lTwo << lTwo << lThree << lThree << sTwo << endl;

    return 0;
}