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

int Solution(int n, long long s, vll arr)
{
    int left = 0, right = 0;
    ll curs = 0;
    int min_length = INT_MAX;

    while (right < n)
    {
        curs += arr[right];

        while (curs >= s)
        {
            min_length = min(min_length, right - left + 1);
            curs -= arr[left];
            left++;
        }

        right++;
    }

    return (min_length != INT_MAX) ? min_length : -1;
}

int main()
{

    int n;
    long long s;
    cin >> n >> s;

    vll arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = Solution(n, s, arr);
    cout << result << endl;

    return 0;
}
