#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int sE = 0; sE <= c / a; sE++)
    {
        int D = c - (sE * a);

        if (D % b == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}