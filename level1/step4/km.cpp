#include <iostream>

using namespace std;

int main() {
    int K = 0;
    int M = 0;
    cin >> K >> M;

    for (int i = (K <= 0) ? 1 : K; i <= M; i++) {
        cout << i << " ";
    }

    return 0;
}