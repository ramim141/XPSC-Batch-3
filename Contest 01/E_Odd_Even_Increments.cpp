#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int A[n];

        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        int firstParity = 1;
        int secondParity = 0;
        bool c = true;

        for (int i = 1; i < n; i++) {
            if (i % 2 == 0) {
                if (A[i] % 2 != firstParity) {
                    c = false;
                    break;
                }
            } else {
                if (A[i] % 2 != secondParity) {
                    c = false;
                    break;
                }
            }
        }

        cout << (c ? "YES" : "NO") << endl;
    }

    return 0;
}
