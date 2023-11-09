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

    int ans[n];

    int head = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= head)
        {
            ans[i] = b[i] - a[i];
        }
        else
        {
            ans[i] = b[i] - head;
        }
        head = b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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