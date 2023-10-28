#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int q;
    cin >> q;

    while (q--)
    {
        int h;
        cin >> h;

        auto A = upper_bound(a.begin(), a.end(), h) - a.begin();
        auto B = lower_bound(a.begin(), a.end(), h) - a.begin();
        B--;

        if (a[0] >= h && a[n - 1] <= h)
            cout << "X"
                 << "X" << endl;
        else if (a[n - 1] <= h)
            cout << a[B] << " X" << endl;
        else if (a[0] >= h)
            cout << "X " << a[A] << endl;
        else
            cout << a[B] << " " << a[A] << endl;
    }

    return 0;
}
