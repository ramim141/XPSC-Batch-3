#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 1;

void solve()
{
    int n;
    cin >> n;

    vector<long long> a(n), p;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    priority_queue<long long> pq;
    pq.push(a[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (pq.top() >= a[i])
        {
            long long x = pq.top() ^ a[i];
            pq.pop();
            pq.push(x);
        }
        else
        {
            pq.push(a[i]);
        }
    }
    cout << pq.size() << endl;
}

int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
