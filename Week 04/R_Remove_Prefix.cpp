#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<int> s;
    int visited = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        visited++;
        if (visited > s.size())
        {
            break;
        }
    }

    cout << ((n - s.size())) << endl;
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