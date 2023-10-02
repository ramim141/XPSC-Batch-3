#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }

    if (odd == 0 || even == 0)
    {
        cout << "NO" << endl;
    }

    for (int i = 0; i < n; i += 2)
    {
        a[i] += 1;
        even ++;
    }
    if (even == n)
    {
        cout << "YES" << endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}