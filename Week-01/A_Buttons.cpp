#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    // cout << max(coin1, coin2);
    if (A == B)
    {
        cout << A + B;
    }
    else
    {
        int coin1 = A + (A - 1);
        int coin2 = B + (B - 1);
        cout << max(coin1, coin2);
    }

    return 0;
}