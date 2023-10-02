#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string num = to_string(n);
    // cout << setw(4) << setfill('0') << n << endl;
    while (num.length() < 4)
    {
        num = '0' + num;
    }
    cout << num << endl;

    return 0;
}