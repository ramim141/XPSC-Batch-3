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
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    string str;
    cin >> str;
    ll br, su, chs;
    cin >> br >> su >> chs;
    ll pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll tot;
    cin >> tot;

    ll cntb = 0, cnts = 0, cntc = 0;
    for (auto &ch : str)
    {
        if (ch == 'B')
            cntb++;
        else if (ch == 'S')
            cnts++;
        else
            cntc++;
    }

    ll low = 0, high = tot + 200;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;

        ll r_b = max(cntb * mid - br, 0LL);
        ll r_s = max(cnts * mid - su, 0LL);
        ll r_c = max(cntc * mid - chs, 0LL);

        ll tp = r_b * pb + r_s * ps + r_c * pc;

        if (tp <= tot)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << high;
}

int main()
{
    fast_io int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
