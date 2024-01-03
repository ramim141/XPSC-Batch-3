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

void solution(vll arr1, vll arr2)
{
    for (ll num : arr2)
    {
        int l = 0;
        int r = arr1.size();
        int cnt = 0;

        while (l < r)
        {
            int mid = l + (r - l) / 2;

            if (arr1[mid] < num)
            {
                cnt = mid + 1;
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }

        cout << cnt << " ";
    }
}

int main()
{
    Ramu int n, m;
    cin >> n >> m;

    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vll b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    solution(a, b);

    return 0;
}
