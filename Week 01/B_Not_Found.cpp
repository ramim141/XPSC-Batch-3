#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    vector<bool> occurred(26, false);
    for (char c : S)
    {
        if ('a' <= c && c <= 'z')
        {
            occurred[c - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        if (!occurred[i])
        {
            cout << static_cast<char>('a' + i) << endl;
            return 0;
        }
    }

    cout << "None" << endl;
    return 0;
}