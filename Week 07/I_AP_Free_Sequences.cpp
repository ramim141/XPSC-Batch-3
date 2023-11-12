#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    bool ok = false;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n == 3)
    {
        if (v[2] - v[1] == v[1] - v[0])
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
        return;
    }
    else if (n > 3)
    {
        for (int i = n - 1; i >= 2; i--)
        {
            if (v[i] - v[i - 1] != v[i - 1] - v[i - 2])
            {
                ok = true;
                break;
            }
        }
        if (ok)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
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
