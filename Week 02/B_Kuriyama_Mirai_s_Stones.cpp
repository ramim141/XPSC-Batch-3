#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> v1(n);
    vector<long long> v2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        v2[i] = v1[i];
    }

    sort(v2.begin(), v2.end());
    vector<long long> v1_p(n + 1, 0);
    vector<long long> v2_p(n + 1, 0);

    
    for (int i = 1; i <= n; i++)
    {
        v1_p[i] = v1_p[i - 1] + v1[i - 1];
        v2_p[i] = v2_p[i - 1] + v2[i - 1];
    }

    int m;

    cin >> m;

    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
        {
           
            cout << v1_p[r] - v1_p[l - 1] << endl;
        }
        else
        {
            
            cout << v2_p[r] - v2_p[l - 1] << endl;
        }
    }

    return 0;
}