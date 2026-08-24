#include <iostream>

using namespace std;

int main() {
    int height = 0;
    cin >> height;
    int R = height / 100;
    int P = height % 100 / 10;
    int O = height % 10;
    int stepOne = R + O;
    int stepTwo = stepOne * P;
    int stepThree = stepTwo - (R * O);
    cout << "Эффективная высота для " << height <<  " м: " << stepThree << " у.е." << endl;
    
    return 0;
}