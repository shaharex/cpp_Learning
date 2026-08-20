#include <iostream>
using namespace std;

int main() {
    int t = 0;
    int v = 0;
    cin >> t;
    cin >> v;
    
    long long tPlus2v = t + (2LL * v);
    long long tv = (long long)t * v;
    long long Stv = (tPlus2v * tPlus2v) - tv;
    
    cout << "Контрольная сумма: " << Stv << endl;
    return 0;
}