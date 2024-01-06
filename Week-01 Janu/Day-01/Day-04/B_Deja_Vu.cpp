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
    ll n, q;
    cin >> n >> q;

    vll v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll a[q];
    for (ll i = 0; i < q; i++)
        cin >> a[i];

    set<ll> st;

    for (ll i = 0; i < q; i++)
    {
        if (st.count(a[i]) == 0) 
        {
            st.insert(a[i]);
            for (ll j = 0; j < n; j++)
            {
                if (v[j] % (1LL << a[i]) == 0)
                    v[j] += (1LL << (a[i] - 1));
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    Ramu int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}
