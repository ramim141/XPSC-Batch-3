#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solution()
{

    string s;
    cin >> s;
    int n;
    n = s.size();

    vector<pair<char, int>> v;

    char mn = min(s[0], s[n - 1]);
    char mx = max(s[0], s[n - 1]);

    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= mn and s[i] <= mx))
        {
            v.push_back({s[i], i});
        }
    }

    sort(v.begin(), v.end(), [&](pair<char, int> a, pair<char, int> b)
         { return a.second < b.second; });

    if (v.size() > 2)
    {
        sort(v.begin() + 1, v.begin() + v.size() - 1, [&](pair<char, int> a, pair<char, int> b)
             {
                if(s[0]>s[n-1]){
                    return a.first>b.first;
                }
                return a.first<b.first; });
    }

    vector<int> seq;

    ll moves = 0;

    seq.push_back(1);

    for (int i = 1; i < v.size(); i++)
    {
        moves += abs(v[i - 1].first - v[i].first);
        seq.push_back(v[i].second + 1);
    }

    cout << moves << " " << seq.size() << endl;

    for (auto i : seq)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}