#include <iostream>
using namespace std;

int main() {
    int peopleNum = 0;
    cin >> peopleNum;
    
    int backpacks = peopleNum * 1;
    int carabins = peopleNum * 2;
    int tents = (peopleNum + 2 - 1) / 2;
    int sleepingBags = peopleNum * 1;

    cout << "Общее количество единиц снаряжения для группы из " << peopleNum << " человек:" <<  endl;
    cout << "- Рюкзаки: " << backpacks << endl;
    cout << "- Карабины: " << carabins << endl;
    cout << "- Палатки: " << tents << endl;
    cout << "- Спальники: " << sleepingBags << endl;
    
    return 0;
}