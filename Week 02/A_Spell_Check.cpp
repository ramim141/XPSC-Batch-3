#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        string s;
        string str = "Timur";
        cin >> s;
        sort(s.begin(), s.end());
        sort(str.begin(), str.end());

        if (s == str)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}