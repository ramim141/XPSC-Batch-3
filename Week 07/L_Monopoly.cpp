#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a > (b + c + d) || b > (a + c + d) || c > (a + b + d) || d > (a + b + c))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
