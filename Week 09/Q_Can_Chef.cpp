#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int x, y;
    cin>>x>>y;

    if(15*x >=2*y)
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