#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int, int>>
#define vpll vector < pair
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvs vector<string>
#define vvb vector<vector<bool>>
#define vvvi vector<vector<vector<int>>>
#define si set<int>
#define sl set<ll>
#define spi set<pair<int, int>>
#define sps set<pair<string, string>>
#define mii map<int, int>
#define mll map<ll, ll>
#define mis map<int, string>
#define msi map<string, int>
#define mss map<string, string>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pis pair<int, string>
#define psi pair<string, int>
#define pss pair<string, string>
#define psss pair<string, string>
#define Ramu                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int solution()
{
    string str;
    cin >> str;

    stack<char> st;
    for (char ch : str)
    {
        if (!st.empty() && ch == 'B' && (st.top() == 'A' || st.top() == 'B'))
        {
            st.pop();
        }
        else
        {
            st.push(ch);
        }
    }
    return st.size();
}

int main()
{
    Ramu int t;
    cin >> t;

    while (t--)
    {
       cout<< solution()<<endl;
    }

    return 0;
}
