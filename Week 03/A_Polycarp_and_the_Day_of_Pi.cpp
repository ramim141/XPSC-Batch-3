#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string p = "3141592653589793238462643383279502884197";

    while (t--)
    {
        string str;
        cin >> str;
        int cnt = 0;  // Reset cnt to zero for each input string

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == p[i])
            {
                cnt++;
            }
            else 
            {
                break;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
