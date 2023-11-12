#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int x;
    cin >> x;

    if (x % 10 == 0)
    {
        cout << (100 - x) << endl;
    }
    else
    {
        int c = (x + 5) / 10 * 10;
        cout << (100 - c) << endl;
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