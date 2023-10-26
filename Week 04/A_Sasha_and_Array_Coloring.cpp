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

        sort(a.begin(), a.end());
        int ans = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            ans += (a[r] - a[l]);
            l++, r--;
        }
        cout << ans << endl;
    }

    return 0;
}