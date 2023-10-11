#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--)
    {
        int m, len;
        cin >> m >> len;
        string ch[m];

        for (int i = 0; i < m; i++)
        {
            cin >> ch[i];
        }

        int sum = 100000;
        for (int i = 0; i < m; i++)
        {
            for (int k = i + 1; k < m; k++)
            {
                int min = 0;
                for (int j = 0; j < len; j++)
                {
                    min += abs(ch[i][j] - ch[k][j]);
                }
                sum = (sum < min) ? sum : min;
            }
        }
        cout << sum << endl;
    }

    return 0;
}