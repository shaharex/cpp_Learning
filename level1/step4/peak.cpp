#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int max = 0;
    int maxt = 0;
    for (int i = 0, j = 0; i < n; i++) {
        cin >> j;
        if (j > max) {
            maxt = max;
            max = j;
        } else if (j > maxt) {
            maxt = j;
        }
    }

    cout << max << "\n" << maxt << endl;

    return 0;
}