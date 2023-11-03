#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n, h, m;
    cin >> n >> h >> m;
    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int hh, mm;
        cin >> hh >> mm;

        int cnt = 0;
        int _h = h;
        int _m = m;

        while (true)
        {
            if (_h == hh && _m == mm)
            {
                break;
            }
            cnt++;
            _m++;
            if (_m == 60)
            {
                _m = 0;
                _h++;
                if (_h == 24)
                {
                    _h = 0;
                }
            }
        }
        ans = min(ans, cnt);
    }
    cout << ans / 60 << " " << ans % 60 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}