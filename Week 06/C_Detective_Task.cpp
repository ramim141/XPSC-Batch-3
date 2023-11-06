#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solution()
{
    string s;
    cin >> s;
    ll n = s.size();
    ll one = 0, zero = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            one = i + 1;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zero = i + 1;
            break;
        }
    }
    if (one == 0 && zero == 0)
    {
        cout << n << endl;
    }
    else if (one == 0)
    {
        cout << zero << endl;
    }
    else if (zero == 0)
    {
        cout << n - one + 1 << endl;
    }
    else
    {
        cout << abs(one - zero) + 1 << endl;
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