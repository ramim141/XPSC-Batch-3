#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long sum = 0, m = LONG_LONG_MAX;

    for (int i = 0; i < n; i++)
    {
        long long value;
        cin >> value;
        sum += value;

        if (value & 1 && value < m)
            m = value;
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - m << endl;
    }

    return 0;
}
