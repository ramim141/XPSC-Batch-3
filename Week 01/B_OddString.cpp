#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string result = "";

    for (int i = 0; i < s.size(); i += 2)
    {
        result += s[i];
    }

    cout << result << endl;
    return 0;
}