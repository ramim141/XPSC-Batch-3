#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;

    int ans = a + b + (a * b);

    if (ans == 111)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}