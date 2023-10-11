#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c = 0;
    string s;
    cin >> s;
    int n = s.size();
    while (n > 1)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += s[i] - '0';
        }
        s = to_string(sum);
        n = s.size();
        c++;
    }
    cout << c;

    return 0;
}