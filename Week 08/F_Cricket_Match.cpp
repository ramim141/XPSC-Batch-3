#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int r, o;
    cin>>r>>o;
    if(6*6*o>= r)
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