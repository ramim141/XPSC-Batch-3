#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if ((n & (n - 1)) != 0)
        {
           
            long long power_of_2 = 1;
            while (power_of_2 <= n)
            {
                power_of_2 <<= 1;
            }
            power_of_2 >>= 1;

            long long ans = power_of_2 - 1;
            cout << ans << endl;
        }
        else
        {
           
            cout << n - 1 << endl;
        }
    }

    return 0;
}
