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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<vector<int>> count(26, vector<int>(2, 0));
        int ans = 0;

        for (auto x : s)
        {
            if (x >= 'a' && x <= 'z')
            {
                count[x - 'a'][0]++;
            }
            else
            {
                count[x - 'A'][1]++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            ans += min({count[i][0], count[i][1]});
            int temp = min({k, abs(count[i][0] - count[i][1]) / 2});
            ans += temp;
            k -= temp;
        }
        cout << ans << endl;
    }

    return 0;
}