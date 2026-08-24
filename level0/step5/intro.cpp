#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float f = 1.123456789;  // Число с типом float
    double d = 1.123456789;  // Число с типом double

    cout << fixed << setprecision(10); // Хочу 10 знаков после точки, и ни пикселем меньше!
    // cout << hexfloat  << f << endl; // hex не работает на float/double, он работает только на int, для того чтобы работало нужен hexFloat  
    cout << "Float:  " << f << endl;
    cout << "Double: " << d << endl;

    // hex 
    int number = 0b00101010; // Вот такие мы олды, что думаем в двоичном стиле
    cout << hex << number << endl; // А говорим в шестнадцатеричном, как веб-дизайнеры
    cout << dec << setw(4) << setfill('_') << number << "\n" << number * 12 << endl;
    return 0;

    return 0;
}