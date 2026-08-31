#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int d = 2;
    while (true)
    {
        if (n % d == 0)
        {
            cout << d << endl;
            break;
        }
        else
        {
            d++;
        }
    }
    return 0;
}