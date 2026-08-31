#include <iostream>

using namespace std;

int main()
{
    int numOne = 0;
    int numTwo = 0;
    cin >> numOne >> numTwo;

    int dSumMax = 0;
    int numMax = 0;
    for (int i = numOne; i <= numTwo; i++)
    {
        int dSum = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                dSum += j;
            }
            else
            {
                continue;
            }
        }
        if (dSum >= dSumMax) dSumMax = dSum, numMax = i;
    }
    cout << numMax << " " << dSumMax << endl;

    return 0;
}