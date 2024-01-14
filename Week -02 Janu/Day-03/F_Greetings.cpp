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

void solve()
{

    int n;
    cin >> n;

    vvi a(n, vi(2));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }

    sort(a.begin(), a.end());

    ordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i][1]);
    }

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += st.order_of_key(a[i][1]);
        st.erase(a[i][1]);
    }

    cout << ans << endl;
}
int main()
{
    Ramu int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}


