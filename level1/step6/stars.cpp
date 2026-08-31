#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;

    int n = 0;
    int prevNum = 0;
    for (int i = 0; i < N; i++)
    {   
        // cout << "prevNum: " << prevNum << endl;
        cin >> n;
        if (prevNum == n)
        {
            continue;
        }
        else
        {
            cout << n << " ";
        }
        prevNum = n;
        // cout << "prevNum: " << prevNum << endl;
    }

    return 0;
}