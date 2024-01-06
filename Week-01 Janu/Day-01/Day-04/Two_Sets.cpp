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
    ll n ;
    cin >> n;

    ll sum = 0;
    vll v1, v2;
    sum = (n * (n + 1)) / 2;
    if (sum % 2 == 0)
    {
        cout << "YES"<<endl;
        ll mid = sum / 2;

        for (int i = n; i >= 1; i--)
        {
            if (i <= mid)
            {
                v1.push_back(i);
                mid = mid - i;
            }
            else
                v2.push_back(i);
        }

        cout << v1.size() << endl;
        for (ll i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
        cout << endl;
        cout << v2.size() << endl;
        for (ll i = 0; i < v2.size(); i++)
            cout << v2[i] << " ";
    }
    else
        cout << "NO";
}

int main()
{
    Ramu 
    int t=1;
   // cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}
