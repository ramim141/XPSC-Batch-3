#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

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
    ll n, s;
    cin >> n >> s;

    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    ll sum = 0;
    int maxLength = 0;

    while (r < n)
    {
        sum += a[r];

        while (sum > s)
        {
            sum -= a[l];
            l++;
        }

        maxLength = max(maxLength, r - l + 1);
        r++;
    }

    cout << maxLength << endl;
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
