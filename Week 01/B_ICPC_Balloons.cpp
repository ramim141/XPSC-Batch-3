#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        map<char, bool> visited;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (visited[s[i]])
            {
                ans++;
            }
            else
            {
                ans += 2;
                visited[s[i]] = true;
            }
        }
        cout << ans << endl;
    }
    return 0;
}