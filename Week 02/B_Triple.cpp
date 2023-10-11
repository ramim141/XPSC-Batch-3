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
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        int cnt = 1;
        bool found = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                cnt++;
                if (cnt >= 3)
                {
                    cout << a[i] << endl;
                    found = true;
                    break;
                }
            }
            else
            {
                cnt = 1;
            }
        }

        if (!found)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
