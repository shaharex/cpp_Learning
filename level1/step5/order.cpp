#include <iostream>

using namespace std;

int main()
{
    int height = 0;
    cin >> height;

    bool isOrdered = true;
    do
    {
        int lastN = height % 10;
        height = height / 10;
        int prevN = height % 10;
        if (height != 0)
        {   
            if (lastN > prevN)
            {
                isOrdered = false;
            }
        }
    } while (isOrdered && height != 0);

    if (isOrdered)
    {
        cout << "Цифры в порядке восхождения!" << endl;
    }
    else
    {
        cout << "Цифры не в порядке!" << endl;
    }

    return 0;
}