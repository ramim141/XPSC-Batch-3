#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int x, y;
    cin >> x >> y;
    if (y <= x)
    {
        cout << y << endl;
    }
    else if (y > x)
    {
        cout << x + 2 * (y - x) << endl;
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