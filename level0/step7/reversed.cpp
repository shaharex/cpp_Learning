#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "";
    cin >> s;

    string reversed(s.rbegin(), s.rend() );
    cout << reversed << endl;

    return 0;

}