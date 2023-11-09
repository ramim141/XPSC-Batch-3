#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ct++;
    }
    if (min(ct, n - ct) % 2)
        cout << "Zlatan\n";
    else
        cout << "Ramos\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}