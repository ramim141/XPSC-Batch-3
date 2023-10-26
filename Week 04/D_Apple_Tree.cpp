#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e6 + 5;
#define ll long long int

vector<int> adj[N];
vector<ll> v;

void DFS(int curr, int par)
{
    bool Child = false;
    for (auto i : adj[curr])
    {
        if (i == par)
            continue;
        Child = true;
        DFS(i, curr);
        v[curr] += v[i];
    }
    if (!Child)
    {
        v[curr] = 1;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            adj[i].clear();
        }
        v.assign(n + 2, 0);
        for (int i = 1; i <= n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        DFS(1, -1);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            ll ans = v[x] * v[y];
            cout << ans << endl;
        }
    }
    return 0;
}
