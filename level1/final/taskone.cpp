#include <iostream>

using namespace std;

int main() {
    long long n = 0;
    cin >> n;

    int threeCount = 0;
    bool setLastNum = true;
    int lastNumFixed = 0;
    int lastCount = 0;
    int evenCount = 0;
    int sumMoreFive = 0;
    int multipleSeven = 1;
    int zeroFiveCount = 0;


    while (n != 0) {
        int lastNum = n % 10;
        lastNumFixed = setLastNum ? lastNum : lastNumFixed;
        n /= 10;
        if (lastNum == 3)   threeCount++;
        if (lastNum == lastNumFixed) lastCount++;
        if (lastNum % 2 == 0) evenCount++;
        if (lastNum > 5) sumMoreFive += lastNum;
        if (lastNum > 7) multipleSeven *= lastNum;
        if (lastNum == 0 || lastNum == 5) zeroFiveCount++;
        setLastNum = false;
    }

    cout << threeCount << endl;
    cout << lastCount << endl;
    cout << evenCount << endl;
    cout << sumMoreFive << endl;
    cout << multipleSeven << endl;
    cout << zeroFiveCount << endl;

    return 0;
}