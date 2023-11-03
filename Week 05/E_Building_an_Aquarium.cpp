#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> nums(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    ll left = 0;
    ll right = 1e10;
    ll ans = 0;

    while (left <= right)
    {
        ll mid = (left + right) / 2;
        ll w = 0;

        for (ll i = 0; i < n; i++)
        {
            if (nums[i] < mid)
            {
                w += (mid - nums[i]);
            }
        }

        if (w <= x)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}
