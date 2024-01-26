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
#define FastIO                        \
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
    vi arr(n);
    for (int &x : arr)
    {
        cin >> x;
    }

    int min_val = *min_element(arr.begin(), arr.end());
    vi sorted_values;

    for (int x : arr)
    {
        if (__gcd(x, min_val) == min_val)
        {
            sorted_values.push_back(x);
        }
    }

    sort(sorted_values.begin(), sorted_values.end());

    int j = 0;

    for (int &x : arr)
    {
        if (__gcd(x, min_val) == min_val)
        {
            x = sorted_values[j++];
        }
    }

    cout << (is_sorted(arr.begin(), arr.end()) ? "YES" : "NO") << "\n";
}


int main()
{
    FastIO int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
