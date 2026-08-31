#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int i = 0;
    while (true)
    {
        i++;

        if (i == n)
        {
            if ((i >= 5 && i <= 9) ||  (i >= 17 && i <= 37) || (i >= 78 && i <= 87)) break;
            cout << i << endl;
            break;
        };

        if (i >= 5 && i <= 9)
            continue;
        if (i >= 17 && i <= 37)
            continue;
        if (i >= 78 && i <= 87)
            continue;

        cout << i << endl;
    }

    return 0;
}