// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// #define pb push_back
// #define mp make_pair

// #define vi vector<int>
// #define vll vector<ll>
// #define vpi vector<pair<int, int>>
// #define vpll vector<pair<ll, ll>>
// #define vb vector<bool>
// #define vvi vector<vector<int>>
// #define vvll vector<vector<ll>>
// #define vvs vector<string>
// #define vvb vector<vector<bool>>
// #define vvvi vector<vector<vector<int>>>
// #define si set<int>
// #define sl set<ll>
// #define mii map<int, int>
// #define mll map<ll, ll>
// #define pii pair<int, int>
// #define pll pair<ll, ll>
// #define Ramu                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// ll Solution(vll  v, ll x)
// {
//     ll l = 0, r = v.size() - 1, ans = -1;

//     while (l <= r)
//     {
//         ll mid = l + (r - l) / 2;

//         if (v[mid] <= x)
//         {
//             ans = mid;
//             l = mid + 1;
//         }
//         else
//         {
//             r = mid - 1;
//         }
//     }

//     return ans;
// }

// int main()
// {
//     ll n, k;
//     cin >> n >> k;

//     vll v(n);
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> v[i];
//     }

//     for (int i = 0; i < k; ++i)
//     {
//         ll k;
//         cin >> k;

//         ll ans = Solution(v, k);
//         cout << ((ans == -1) ? 0 : ans + 1) << endl;
//     }

//     return 0;
// }

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

void solution()
{
    ll n, k;
    cin >> n >> k;
    vll a(n);
    for (auto &i : a)
        cin >> i;

    for (ll i = 0; i < k; ++i)
    {
        ll x;
        cin >> x;
        auto ans = upper_bound(a.begin(), a.end(), x);
        cout << ans - a.begin() << endl;
    }
}

int main()
{
    Ramu int t = 1;
    // cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}
