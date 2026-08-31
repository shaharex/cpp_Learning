#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int nOrig = n;
    int reversed = 0;    
    while (n != 0)
    {
        int lastN = n % 10;
        n = n / 10;
        reversed = reversed * 10 + lastN;
    }
    if (reversed == nOrig) {
        cout << "Число является палиндромом!" << endl;
    } else {
        cout << "Число не является палиндромом." << endl;
    }

    return 0;
}