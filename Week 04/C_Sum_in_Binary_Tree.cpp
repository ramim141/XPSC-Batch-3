#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll ans = 0;
        while (n != 0)
        {
            ans += n;
            n /= 2;
        }

        cout << ans << endl;
    }

    return 0;
}