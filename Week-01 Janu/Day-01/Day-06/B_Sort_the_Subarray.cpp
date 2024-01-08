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

int solution()
{
    int n;
    cin >> n;
    vi v1(n), v2(n);
    for (auto &i : v1)
    {
        cin >> i;
    }
    for (auto &i : v2)
    {
        cin >> i;
    }
    int l = 0, r = n - 1;

    while (v1[l] == v2[l])
    {
        l++;
    }
    while (v1[r] == v2[r])
    {
        r--;
    }
    while (l > 0 && v2[l] >= v2[l - 1])
    {
        l--;
    }
    while (r < n - 1 && v2[r] <= v2[r + 1])
    {
        r++;
    }

    cout << l + 1 << " " << r + 1 << endl;
    return 0;
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
