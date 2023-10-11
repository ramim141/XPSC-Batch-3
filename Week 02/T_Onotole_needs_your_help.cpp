#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s = 0;
    cin >> n;

    while (n-- > 0)
    {
        int x;
        cin >> x;
        s ^= x;
    }

    cout << s << endl;
    return 0;
}