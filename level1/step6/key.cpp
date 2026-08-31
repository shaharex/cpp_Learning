#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    while (true)
    {
        int key = 0;
        while (n != 0)
        {
            int lastNum = n % 10;
            n = n / 10;
            key += lastNum;
        }
        if (key > 9)
        {
            n = key;
        }
        else
        {
            cout << key << endl;
            break;
        }
    }

    return 0;
}