#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int a, b, c, x,y;
    cin>>a>>b>>c>>x>>y;

    x = max(0, x-a);
    y = max(0, y-b);

    if(c>=x+y)
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