#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n, x, y;
    int cnt = 0;
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cnt += x;
        }
        else
        {
            cnt += y;
        }
    }
    cout << cnt << endl;
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