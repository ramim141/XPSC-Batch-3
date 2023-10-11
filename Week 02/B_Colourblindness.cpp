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
        int n;
        cin >> n;

        string s, p;
        cin >> s >> p;
        bool r = false;
        for (int i = 0; i < n; i++)
        {
            if ((p[i] != s[i]) && (s[i] == 'R' || p[i] == 'R'))
            {
                r = true;
                break;
            }
        }

        if (r)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
