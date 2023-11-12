#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    int ans=0;

    while (n != 50)
    {
        ans++;
        if (n < 50)
            n += 2;
        else if (n > 50)
            n -= 3;
    }
    cout << ans << endl;
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