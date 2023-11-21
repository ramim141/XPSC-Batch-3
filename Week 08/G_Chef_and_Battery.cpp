#include <bits/stdc++.h>
using namespace std;

void solution()
{

    int n;
    cin >> n;

    int t = 0;

    while (n != 50)
    {
        if (n < 50)
        {
            n += 2;
        }
        else
        {
            n -= 3;
        }
        t++;
    }
    cout << t << endl;
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