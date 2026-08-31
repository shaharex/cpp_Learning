#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    int sum = 0;
    bool nAdd = true;
    while (cin >> n)
    {
        if (n < 0 && nAdd)
        {
            nAdd = false;
            cout << "Сумма высот: " << sum << endl;
        }
        else
        {
            sum += n;
        }
    }

    return 0;
}