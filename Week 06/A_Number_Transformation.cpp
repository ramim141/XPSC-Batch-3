#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int x, y;
    cin >> x >> y;

    if (x == y)
    {
        cout << 1 << " " << 1 << '\n';
    }
    else if (y % x != 0)
    {
        cout << 0 << " " << 0<< '\n';
    }
    else
    {
        cout << 1 << " " << y/x << '\n';
    }
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
