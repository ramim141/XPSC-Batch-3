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
        vector<string> v(n);
        set<string> st;
        string s = "";
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (auto x : v)
            st.insert(x);
        for (int i = 0; i < n; i++)
        {
            int f = 0;
            for (int j = 1; j < v[i].length(); j++)
            {
                string s1 = v[i].substr(0, j);
                string s2 = v[i].substr(j);
                if (st.count(s1) && st.count(s2))
                {
                    f = 1;
                    break;
                }
            }
            if (f)
                s += '1';
            else
                s += '0';
        }
        cout << s << "\n";
    }

    return 0;
}