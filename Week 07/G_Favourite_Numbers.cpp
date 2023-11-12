#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;

    if (n % 2 == 0 && n % 7 == 0)
    {
        cout << "Alice" << endl;
    }
    else if (n % 2 == 1 && n % 9 == 0)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Charlie" << endl;
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