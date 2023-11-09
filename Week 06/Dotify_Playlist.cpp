#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K, L;
        cin >> N >> K >> L;

        vector<pair<int, int>> v;
        for (int i = 0; i < N; i++)
        {
            int d, l;
            cin >> d >> l;
            v.push_back(make_pair(d, l));
        }
        vector<int> a;

        for (auto &pair : v)
        {
            if (pair.second == L)
            {
                a.push_back(pair.first);
            }
        }
        if (a.size() < K)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(a.begin(), a.end(), greater<int>());
            int ans = 0;
            for (int i = 0; i < K; i++)
            {
                ans += a[i];
            }
            cout << ans << endl;
        }
    }
    return 0;
}
