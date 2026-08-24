#include <iostream>
#include <string>


using namespace std;

int main() {

    string sTemplate  = "";
    string username = "";
    string orderId = "";
    getline(cin, sTemplate);
    cin >>  username >> orderId;

    string placeholderU = "%USERNAME%";
    string placeholderO = "%ORDER_ID%";

    size_t indexUser = sTemplate.find(placeholderU);
    sTemplate.replace(indexUser, placeholderU.length(), username);
    
    size_t indexOrder = sTemplate.find(placeholderO);
    sTemplate.replace(indexOrder, placeholderO.length(), orderId);
    
    cout << sTemplate << endl;
    return 0;   
}