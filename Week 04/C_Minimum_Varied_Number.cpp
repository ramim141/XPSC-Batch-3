#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        vector<int> ans;
        for (int i = 9; i >= 1; i--)
        {
            if (s == 0)
                break;
            if (s < i)
            {
                ans.push_back(s);
                break;
            }
            else
            {
                ans.push_back(i);
                s -= i;
            }
        }
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}