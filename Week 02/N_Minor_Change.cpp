#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    int cnt = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
        {
            cnt++;
            // replace(s[i], t[i]);
        }
    }
    cout << cnt;

    return 0;
}