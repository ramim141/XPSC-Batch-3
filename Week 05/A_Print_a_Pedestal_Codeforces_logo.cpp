#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int t = n / 3;
        n %= 3;

        if (n == 1)
        {
            cout << t << " " << t + 2 << " " << t - 1 << endl;
        }
        else if (n == 2)
        {
            cout << t + 1 << " " << t + 2 << " " << t - 1 << endl;
        }
        else
        {
            cout << t << " " << t + 1 << " " << t - 1 << endl;
        }
    }

    return 0;
}