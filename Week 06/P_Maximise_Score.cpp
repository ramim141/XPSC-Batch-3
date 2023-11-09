#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, x, mi= INT_MAX;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            x = max(abs(a[i] - a[i + 1]), 0);
        }
        else if (i == n - 1)
        {
            x = max(abs(a[i] - a[i - 1]), 0); 
        }
        else
        {
            x = max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])); 
        }
        mi = min(mi, x); 
    }
    cout << mi << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}