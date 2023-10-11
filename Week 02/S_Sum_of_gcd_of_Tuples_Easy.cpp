#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    int val = 0;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            for (int k = 1; k <= x; k++)
            {
                int z = __gcd(i, j);
                z = __gcd(z, k);
                val += z;
            }
        }
    }
    cout << val;
    return 0;
}