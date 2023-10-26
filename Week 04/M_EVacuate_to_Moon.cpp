#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        long long h;

        cin >> n >> m;
        cin >> h;

        long long a[n];
        long long b[m];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(a, a + n, greater<long long>());
        sort(b, b + m, greater<long long>());

        long long sum = 0;

        for (int i = 0; i < min(n, m); i++)
        {
            if (b[i] * h >= a[i])
                sum += a[i];
            else
                sum += (b[i] * h);
        }

        cout << sum << endl;
    }

    return 0;
}
