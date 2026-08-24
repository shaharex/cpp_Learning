#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstSpecies = "";
    string secondSpecies = "";
    cin >> firstSpecies >> secondSpecies;

    int firstSL = (firstSpecies.length() + 2 - 1) / 2;
    int secondSL = (secondSpecies.length() + 2 - 1) / 2;
    string firstHalf = firstSpecies.substr(0, firstSL);
    string secondHalf = secondSpecies.substr(secondSL);


    cout << firstHalf << secondHalf << endl;

    return 0;
}