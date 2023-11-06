#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s, p;
        cin >> s >> p;

        long long ans = 0;
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] == 'a' && p.size() != 1)
            {
                ans = -1;
                break;
            }
        }

        long long l = 1;
        for (int i = 0; i < s.size(); i++)
            l *= 2;

        if (ans == -1)
        {
            cout << ans << '\n';
        }
        else
        {
            cout << (p == "a" ? 1 : l) << '\n';
        }
    }

    return 0;
}
