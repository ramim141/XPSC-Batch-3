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

        int sum = 0;
        int smallest = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x < smallest)
            {
                smallest = x;
            }

            sum += x;
        }

        cout << sum - n * smallest << endl;
    }

    return 0;
}