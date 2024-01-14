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

ll Solution(int n, ll s,vll arr)
{
    int left = 0, right = 0;
    ll s1 = 0;
    ll s2 = 0;

    while (right < n)
    {
        s1 += arr[right];

        while (s1 >= s)
        {
            s2 += n - right;
            s1 -= arr[left];
            left += 1;
        }

        right += 1;
    }

    return s2;
}

int main()
{
    int n;
    ll s;
    cin >> n >> s;

    vll arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    ll result = Solution(n, s, arr);
    cout << result << endl;

    return 0;
}
