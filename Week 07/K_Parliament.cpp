#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int x, n;
    cin>>x>>n;

    if(2*n>=x)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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