#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n < 2 * k)
        {
            cout << "NO" << endl;
            continue;
        }

        ll H;
        if (n % 2 == 0)
            H = n / 2;
        else
            H = n / 2 + 1;

        ll value = H - k;
        if (value % 2 == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        else
        {
            cout << "NO" << endl;
            continue;
        }
    }

    return 0;
}