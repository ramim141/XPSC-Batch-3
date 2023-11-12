#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int x, y;
    cin >> x >> y;

    float online = x - (x * 0.1); 
    if (online < y)
    {
        cout << "ONLINE" << endl;
    }
    else if (online > y)
    {
        cout << "DINING" << endl;
    }
    else 
    {
        cout << "EITHER" << endl;
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
