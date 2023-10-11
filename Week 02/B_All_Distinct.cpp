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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int cnt = 0;

        for (int i = 1; i <n; i++)
        {
            if (v[i] == v[i - 1])
            {
                cnt++;
            }
        }
        if (cnt % 2 == 1)
        {
            cnt++;
        }
        cout << n - cnt << endl;
    }

    return 0;
}