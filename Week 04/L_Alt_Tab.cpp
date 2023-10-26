#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool sorting(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first > b.first;
}

int main()
{

    ll n;
    cin >> n;
    stack<string> st;
    if (n == 1)
    {
        string s;
        cin >> s;
        cout << s[s.size() - 2] << s[s.size() - 1] << endl;
    }
    else
    {
        for (ll j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            st.push(s);
        }
        unordered_set<string> s;
        while (!st.empty())
        {
            if (s.find(st.top()) == s.end())
                cout << st.top()[(st.top()).size() - 2] << st.top()[(st.top()).size() - 1];
            s.insert(st.top());
            st.pop();
        }
        cout << endl;
    }
    return 0;
}
