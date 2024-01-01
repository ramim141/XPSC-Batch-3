#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int, int>>
#define vpll vector < pair
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector < vector<ll>
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

    vll v(n);
    vll a(n);

    ll sumv = 0;
    ll suma = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sumv += v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        suma += a[i];
    }

    ll mnv = *min_element(v.begin(), v.end());
    ll mna = *min_element(a.begin(), a.end());

    cout << min((sumv + n * mna), (suma + n * mnv)) << endl;
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