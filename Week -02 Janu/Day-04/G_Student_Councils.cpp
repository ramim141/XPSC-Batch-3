#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvs vector<string>
#define vvb vector<vector<bool>>
#define vvvi vector<vector<vector<int>>>
#define si set<int>
#define sl set<ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define Ramu                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll k, n;
vll a;
bool ok(ll x)
{
    ll t = x;
    x *= k;
    for (auto i : a)
        x -= min(t, i);
    return x <= 0;
}

int main()
{

    ll l, r, mid;
    cin >> k >> n;
    a.resize(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    l = 0, r = 1e12;
    while (l + 1 < r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
            l = mid;
        else
            r = mid;
    }
    cout << l;
    return 0;
}