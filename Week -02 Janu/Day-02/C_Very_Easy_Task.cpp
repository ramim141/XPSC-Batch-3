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

bool Solution(int t, int n, int x, int y)
{
    if (t < min(x, y))
        return false;

    int cnt = 1;
    t -= min(x, y);
    cnt += t / x + t / y;

    return cnt >= n;
}

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int low = 0, high = max(x, y) * n, mid;

    while (low + 1 < high)
    {
        mid = low + (high - low) / 2;
        if (Solution(mid, n, x, y))
            high = mid;
        else
            low = mid;
    }
    cout << high;
}
