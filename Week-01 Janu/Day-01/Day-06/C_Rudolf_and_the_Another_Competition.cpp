#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvs vector<string>
#define vvb vector<vector<bool>>
#define vvvi vector<vector<vector<int>>>
#define si set<int>
#define sl set<ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define Ramu                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solution()
{
    int n, m, h;
    cin >> n >> m >> h;
    pair<int, ll> p;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        vi v(m);
        for (int j = 0; j < m; j++)
        {
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        int task_cnt = 0;
        ll penalty = 0, sum = 0;
        for (int j = 0; j < m; j++)
        {
            if (sum + v[j] > h)
                break;
            sum += v[j];
            penalty += sum;
            task_cnt++;
        }
        if (i)
        {
            if (make_pair(-task_cnt, penalty) < p)
                ans++;
        }
        else
            p = {-task_cnt, penalty};
    }
    cout << ans << '\n';
}

int main()
{
    Ramu int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}
