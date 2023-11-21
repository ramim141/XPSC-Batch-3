#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt_1 = 0, cnt_0 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt_1++;
        }
        else
        {
            cnt_0++;
        }
    }

       if ((cnt_0 == 0 || cnt_1 == 0))
    {
        cout << "Ramos" << endl;
    }
    else
    {
        cout << "Zlatan" << endl;
    }
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
