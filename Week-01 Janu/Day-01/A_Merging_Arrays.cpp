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

    int m;
    cin >> m;
    vll a(n);
    vll b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vll c;
    for (int i = 0; i < n; i++)
    {
        c.push_back(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        c.push_back(b[i]);
    }
    sort(c.begin(), c.end());
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }
}

int main()
{
    Ramu 
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}
