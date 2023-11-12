#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    vector<int> v(n); // Fix: Declare a vector of size n
    vector<int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));

    // if (v.size() < 2)
    // {
    //     cout << "Sum not possible. Less than two unique elements." << endl;
    // }
    // else
    // {
    //     cout << v[v.size() - 1] + v[v.size() - 2] << endl;
    // }
    cout << v[v.size() - 1] + v[v.size() - 2] << endl;
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
