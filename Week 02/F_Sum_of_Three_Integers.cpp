#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int K, S;
    cin >> K >> S;

    int cnt = 0;
    for (int X = 0; X <= K; X++)
        for (int Y = 0; Y <= K; Y++)
            if (S - (X + Y) >= 0 and S - (X + Y) <= K)
                cnt++;

    cout << cnt;

    return 0;
}

