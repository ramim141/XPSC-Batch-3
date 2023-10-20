#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int a[N], t, n, p, ans;
map<int, int> f;

int main()
{
    for (cin >> t; t; --t)
    {
        cin >> n, ans = 0, f.clear();
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i], ++f[a[i]];
        }
        sort(a + 1, a + n + 1);
        for (int i = n; i >= 1; --i)
        {
            if (f[a[i]])
            {
                --f[a[i]], p = a[i];
                for (; f[p - 1]; --p, --f[p])
                {
                }
                ++ans;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
