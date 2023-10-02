#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long X, Y;
    cin >> X >> Y;
    
    long long cnt = 1;
    long long i = 0;
    
    while (X * 2 <= Y)
    {
        X *= 2;
        cnt++;
    }
    
    cout << cnt;
    return 0;
}