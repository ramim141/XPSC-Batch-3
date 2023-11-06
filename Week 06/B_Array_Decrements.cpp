#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int diff = -1, diff_0 = -1;
    bool imp = false;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            imp = true;
            break;
        }

        if (b[i] != 0)
        {
            if (diff == -1)
            {
                diff = a[i] - b[i];
            }
            else
            {
                if (a[i] - b[i] != diff)
                {
                    imp = true;
                    break;
                }
            }
        }
        else
        {
            diff_0 = max(diff_0, a[i] - b[i]);
        }
    }

    if (imp)
    {
        cout << "NO" << endl;
        // continue;
    }

    else if (diff == -1 || diff_0 <= diff)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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