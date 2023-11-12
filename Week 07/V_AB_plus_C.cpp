#include <iostream>
using namespace std;

#define ll long long
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            cout << -1 << endl;
            continue;
        }
        if (x <= 1e6)
        {
            cout << x - 1 << " " << 1 << " " << 1 << endl;
            continue;
        }
        int m = 1e6;
        if (x % m == 0)
        {
            cout << m << " " << (x / m - 1) << " " << m << endl;
        }
        else
        {
            cout << m << " " << x / m << " " << x % m << endl;
        }
    }
    return 0;
}
