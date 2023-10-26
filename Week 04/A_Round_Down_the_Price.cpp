#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solution()
{
    int m;
    cin >> m;
    ll x = 1, ans = m - x;
    while (x <= m)
    {
        ans = min(ans, m - x);
        x *= 10;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}