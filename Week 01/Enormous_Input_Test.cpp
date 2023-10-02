#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (val % k == 0)
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}