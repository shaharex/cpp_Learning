#include <iostream>

using namespace std;

int main() {
    int m = 0;
    int d = 0;
    cin >> m >> d;

    int pd = 0;
    switch (m) {
        case 1:
            pd = 0 + d;
            break;
        case 2:
            pd = 31 + d;
            break;
        case 3: 
            pd = 59 + d;
            break;
        case 4:
            pd = 90 + d;
            break;
        case 5:
            pd = 120 + d;
            break;
        case 6:
            pd = 151 + d;
            break;
        case 7:
            pd = 181 + d;
            break;
        case 8:
            pd = 212 + d;
            break;
        case 9:
            pd = 243 + d;
            break;
        case 10:
            pd = 273 + d;
            break;
        case 11:
            pd = 304 + d;
            break;
        case 12:
            pd = 334 + d;
            break;
    }
    cout << "Порядковый номер дня: " << pd << endl;
        

    return 0;
}