// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         set<string> uniqueStrings;

//         for (int i = 0; i < n - 1; i++)
//         {
//             string newStr = s.substr(0, i) + s.substr(i + 2);
//             uniqueStrings.insert(newStr);
//         }
//         cout << uniqueStrings.size() << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long ans = n - 1;
        for (int i = 0; i < s.size() - 2; i++)
        {
            if (s[i] == s[i + 2])
            {
                ans--;
            }
        }
        cout << ans << endl;
    }
}
