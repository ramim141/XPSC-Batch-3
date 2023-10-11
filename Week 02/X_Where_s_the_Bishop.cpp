#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char s[9][9];
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                cin >> s[i][j];
            }
        }
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                if (s[i - 1][j - 1] == '#' && s[i - 1][j + 1] == '#' && s[i + 1][j - 1] == '#' && s[i + 1][j + 1] == '#')
                    cout << i << " " << j << "\n";
            }
        }
    }

    return 0;
}