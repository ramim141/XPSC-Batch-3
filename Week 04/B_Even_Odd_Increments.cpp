#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, q;
    cin >> t;

    while (t--)
    {
        int x, odd = 0, even = 0;
        cin >> n >> q;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 0)
                odd++;
            else
                even++;
            ans += x;
        }
        int p;
        while (q--)
        {
            cin >> x >> p;
            if (x == 0)
            {
                ans += p * odd;
                if (p % 2 == 1)
                    even += odd, odd = 0;
            }
            else
            {
                ans += p * even;
                if (p % 2 == 1)
                    odd += even, even = 0;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
