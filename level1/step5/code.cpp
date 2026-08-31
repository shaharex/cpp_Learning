#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    bool isSumOneDigit = true;

    cout << n << endl;
    do
    {
        int sum = 0;
        if (n / 10 != 0)
        {
            while (n != 0)
            {
                int lastN = n % 10;
                n = n / 10;
                sum += lastN;
            }
            n = sum;
        }
        else
        {
            isSumOneDigit = false;
        }
        if (sum != 0) cout << sum << endl;
    } while (isSumOneDigit);

    return 0;
}