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
    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m));

    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        for(int j=0; j<m; j++)  
        {
            v[i][j] = s[j];
        }
    }

    string str = "vika";
    int cnt = 0;
    
    for(int k = 0; k < m; k++)
    {
        for(int j = 0; j < n; j++)
        {
            if(v[j][k] == str[cnt])  
            {
                ++cnt;
                break;
            }
        }
    }
    
    if(cnt == 4) 
        cout << "YES" << endl; 
    else 
        cout << "NO" << endl;
}

int main()
{
    Ramu 
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}
