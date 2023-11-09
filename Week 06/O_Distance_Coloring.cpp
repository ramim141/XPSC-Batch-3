#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ans = 1;
        for (ll i = 0; i < n && k; i++)
        {
            ans *= k;
            ans %= mod;
            k--;
        }
        cout << ans << endl;
    }

    return 0;
}