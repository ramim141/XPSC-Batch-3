
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
        int n, m;
        cin >> n >> m;
        int t[n][m];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> t[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sumd = 0;
                int di = i, dj = j;
                while (di > -1 and di < n and dj > -1 and dj < m)
                {
                    sumd += t[di][dj];
                    di++;
                    dj++;
                }
                di = i, dj = j;
                while (di > -1 and di < n and dj > -1 and dj < m)
                {
                    sumd += t[di][dj];
                    di--;
                    dj--;
                }
                di = i, dj = j;
                while (di > -1 and di < n and dj > -1 and dj < m)
                {
                    sumd += t[di][dj];
                    di++;
                    dj--;
                }
                di = i, dj = j;
                while (di > -1 and di < n and dj > -1 and dj < m)
                {
                    sumd += t[di][dj];
                    di--;
                    dj++;
                }
                sumd -= (t[i][j] * 3);
                ans = max(ans, sumd);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
