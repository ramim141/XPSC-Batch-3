#include <bits/stdc++.h>
using namespace std;

int distance(const vector<int> &v, int n, int c)
{
    vector<int> a(v); 
    sort(a.begin(), a.end());

    int low = 0;
    int high = a[n - 1] - a[0];
    int result = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int Cow = 1;
        int s = a[0];

        for (int i = 1; i < n; i++)
        {
            if (a[i] - s >= mid)
            {
                Cow++;
                s = a[i];
            }
        }

        if (Cow >= c)
        {
            result = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int result = distance(v, n, c);
        cout << result << endl;
    }

    return 0;
}
