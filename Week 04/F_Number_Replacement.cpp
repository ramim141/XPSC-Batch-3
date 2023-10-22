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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        map<int, char> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]] = s[i];
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != mp[a[i]])
                flag = true;
        }
        if (flag == false)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}