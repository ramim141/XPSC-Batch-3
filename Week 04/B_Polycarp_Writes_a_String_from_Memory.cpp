#include <bits/stdc++.h>
using namespace std;

void solution()
{
    string s;
    cin >> s;
    int n = s.size();

    int ans = 1;

    set<char> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        if (st.size() > 3)
        {
            ans++;
            st.clear();
            st.insert(s[i]);
        }
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