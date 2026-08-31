#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n = 0;
    cin >> n;

    long long num = n;
    long long count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    long long numT = num / (long long)pow(10, count - 3) % 10;
    cout << numT << endl;

    return 0;
}