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
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(unique(s.begin(), s.end()), s.end());
        string sound = "meow";
        cout << (s == "meow" ? "YES" : "NO") << "\n";
    }

    return 0;
}