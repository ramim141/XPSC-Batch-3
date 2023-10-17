#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    int t;
    cin >> t;

    while (t--)
    {
        cin >> n;

        map<char, ll> f_occ;
        map<char, ll> s_occ;
        map<string, ll> occ;
        vector<string> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f_occ[a[i][0]]++;
            s_occ[a[i][1]]++;
            occ[a[i]]++;
        }

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            ll x = max((ll)0, f_occ[a[i][0]] - occ[a[i]]);
            ans += x;
            x = max((ll)0, s_occ[a[i][1]] - occ[a[i]]);
            ans += x;
            if (f_occ[a[i][0]] > 0)
                f_occ[a[i][0]]--;
            if (s_occ[a[i][1]] > 0)
                s_occ[a[i][1]]--;
            if (occ[a[i]] > 0)
                occ[a[i]]--;
        }
        cout << ans << endl;
    }

    return 0;
}
