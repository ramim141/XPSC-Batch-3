#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int x, y;
    cin >> x >> y;

    if (x > y)
        cout << x - y << endl;
    else
        cout << 0 << endl;
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