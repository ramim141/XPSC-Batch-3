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
        int n, s, r;
        cin >> n >> s >> r;

        int mx = s - r;
        cout << mx << " ";
        n--;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = 1;
        }
        r = r - n;

        int idx = 0;

        for (int i = 1; i <= r; i++)
        {
            if (arr[idx] != mx)
            {
                arr[idx]++;
            }
            else
            {
                idx++;
                arr[idx]++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}