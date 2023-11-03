#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int a, b, c;
    cin >> a >> b >> c;

    // if(a==1) cout<<1<<endl;

    int a1 = (a - 1);
    int b2 = abs(b - c) + (c - 1);

    if (a1 == b2)
        cout << 3 << endl;
    else if (a1 < b2)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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