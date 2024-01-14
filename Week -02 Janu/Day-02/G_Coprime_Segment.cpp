/*
 * @date:  12/01/2024
 * @source: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/G
 */
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

int main()
{
    int n;
    vll v;
    cin >> n;
    v.resize(n);
    for (auto &x : v)
        cin >> x;

    ll l = 0, ans = n + 1;
    vll val = {0};

    for (int i = 0; i < n; ++i)
    {
        val.push_back(__gcd(val.back(), v[i]));
        while (val.back() != 1)
        { 
            val.pop_back();
            ans = max(ans, i - l + 1);
            l++;
        }
    }
    if (ans > n)
        ans = -1;
    cout << ans << endl;
    return 0;
}
