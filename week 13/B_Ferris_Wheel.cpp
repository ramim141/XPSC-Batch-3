#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int, int>>
#define vpll vector < pair
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector < vector<ll>
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
    int n, x;
    cin >> n >> x;

    vll v(n);
    int cnt = n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int a = 0;
    int b = n - 1;
    while (a < b)
    {
        if (v[a] + v[b] <= x)
        {
            a++;
            b--;
            cnt--;
        }
        else
        {
            b--;
        }
    }
    cout << cnt << endl;
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