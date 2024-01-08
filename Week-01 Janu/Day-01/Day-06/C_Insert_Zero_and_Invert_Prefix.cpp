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
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (v[n - 1] == 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    vi ans; 
    for (int i = n - 1; i > -1; i--)
    {
        if (v[i] == 0)
        { 
            if (i == 0 || v[i - 1] == 0)
            {
                ans.push_back(0);
            }
            else if (v[i - 1] == 1)
            {
                int cnt = 0, x;
                int j = i - 1;
                int nxt;
                while (j > -1 && v[j] == 1)
                {
                    cnt++;
                    nxt = j;
                    j--;
                }
                x = cnt;
                while (cnt--)
                {
                    ans.push_back(0);
                }
                ans.push_back(x);
                i = nxt + 1;
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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
