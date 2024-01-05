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
    int n;
    cin >> n;
    vll  a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i)
    {
        int l, r;
        cin >> l >> r;

        auto itl = lower_bound(a.begin(), a.end(), l);
        auto itr = upper_bound(a.begin(), a.end(), r);

        cout << itr - itl << " ";
    }
    cout << '\n';
}

int main()
{
    Ramu int t=1;
    //cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}
