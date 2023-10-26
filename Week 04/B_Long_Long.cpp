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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll sum = 0, op = 0;
        bool ng = false;
        int cons = 0;
        for (int i = 0; i <= n; i++)
        {
            if (i < n)
                sum += abs(a[i]);
            if (ng)
            {
                if (i == n or a[i] > 0)
                {
                    op++;
                    ng = false;
                }
            }
            else
            {
                if (a[i] < 0)
                {
                    ng = true;
                }
            }
        }

        cout << sum << " " << op << endl;
    }

    return 0;
}