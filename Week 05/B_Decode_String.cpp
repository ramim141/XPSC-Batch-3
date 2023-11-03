#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solution()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        if (i + 2 < n && s[i + 2] == '0' && (i + 3 >= n || s[i + 3] != '0'))
        {
            int num = ((s[i] - '0') * 10) + (s[i + 1] - '0');
            ans.push_back(static_cast<char>(96 + num));
            i += 2;
        }
        else
        {
            int num = ((s[i] - '0'));
            ans.push_back(static_cast<char>(96 + num));
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}
