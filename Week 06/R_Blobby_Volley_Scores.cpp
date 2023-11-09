#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    string x;
    cin >> x;
    char server = 'A';
    int alice = 0, bob = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == 'A' and server == 'A')
        {
            alice++;
        }
        else if (x[i] == 'A' and server == 'B')
        {
            server = 'A';
        }
        else if (x[i] == 'B' and server == 'B')
        {
            bob++;
        }
        else if (x[i] == 'B' and server == 'A')
        {
            server = 'B';
        }
    }
    cout << alice << " " << bob << endl;
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