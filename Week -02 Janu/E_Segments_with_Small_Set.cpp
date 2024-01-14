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

ll Solution(ll n, ll k, const vll &arr)
{
    unordered_map<ll, ll> fq;
    ll l = 0, r = 0, cnt = 0, ans = 0;

    while (r < n)
    {
        if (fq[arr[r]] == 0)
        {
            cnt++;
        }
        fq[arr[r]]++;

        while (cnt > k)
        {
            fq[arr[l]]--;
            if (fq[arr[l]] == 0)
            {
                cnt--;
            }
            l++;
        }

        ans += r - l + 1;
        r++;
    }

    return ans;
}

int main()
{
    ll n, k;
    cin >> n >> k;

    vll arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << Solution(n, k, arr) << endl;

    return 0;
}