#include <iostream> 

using namespace std;

int main() {

    string w;
    int counter = 0;
    bool counterStop = false;
    while (cin >> w) {
        if (w == "достаточно" || w == "стоп" || w == "хватит") {
            counterStop = true;
            cout << "Количество уступов: " << counter << endl;
        } else if (!counterStop) {
            counter++;
        }
    }


    return 0;
}