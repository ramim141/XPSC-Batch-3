#include <bits/stdc++.h>
using namespace std;

int countDifferentBits(int x, int y)
{
    int count = 0;
    while (x > 0 || y > 0)
    {
        if ((x % 2) != (y % 2))
        {
            count++;
        }
        x /= 2;
        y /= 2;
    }
    return count;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> armies(m + 1);

    for (int i = 0; i <= m; i++)
    {
        cin >> armies[i];
    }

    int friends = 0;

    for (int i = 0; i < m; i++)
    {
        int diff = countDifferentBits(armies[i], armies[m]);
        if (diff <= k)
        {
            friends++;
        }
    }

    cout << friends << endl;

    return 0;
}
