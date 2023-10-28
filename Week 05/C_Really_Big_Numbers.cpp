#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, s;
    cin >> n >> s;

    long long ans = 0;
    long long l = 1, h = n;

    while (l <= h)
    {
        long long mid = (l + h) / 2;
        int digitSum = 0;
        long long tempMid = mid;

        while (tempMid)
        {
            digitSum += tempMid % 10;
            tempMid /= 10;
        }

        if (mid - digitSum >= s)
        {
            ans = max(ans, n - mid + 1);
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans;

    return 0;
}
