#include <iostream>

using namespace std;

int main() {
    int A, B, T;
    cin >> A >> B >> T;

    int time = A;
    int biscuits = 0;

    while (time <= T + 0.5) {
        biscuits += B;
        time += A;
    }

    cout << biscuits << endl;

    return 0;
}
