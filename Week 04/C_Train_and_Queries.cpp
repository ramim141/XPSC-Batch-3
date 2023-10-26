#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define vi vector<int>
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> u(n);
        for (int i = 0; i < n; i++)
        {
            cin >> u[i];
        }

        map<int, vi> idx;
        for (int i = 0; i < n; i++)
        {
            idx[u[i]].push_back(i);
        }

        while (q--)
        {
            int a, b;
            cin >> a >> b;
            if (idx[a].empty() || idx[b].empty())
            {
                cout << "NO" << endl;
                continue;
            }
            if (a == b)
            {
                cout << "YES" << endl;
                continue;
            }
            if (idx[a].front() < idx[b].back())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}