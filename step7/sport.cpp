#include <iostream>
#include <string>

using namespace std;

int main() {
    string format = "";
    cin >> format;

    size_t pos = format.find("_");
    string sub = format.substr(pos + 1);

    cout << sub << "! " << sub << "! " << "Go!" <<  endl;


    return 0;

}