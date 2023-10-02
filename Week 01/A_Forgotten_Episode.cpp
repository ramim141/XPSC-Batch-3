// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long  n;
//     cin >> n;

//     vector<long long > a(n);

//     for (long long  i = 0; i < n-1; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     long long  sum = accumulate(a.begin(), a.end(), 0);

//     long long  total_sum = (n * (n + 1)) / 2;
//     long long  mis_ep = total_sum - sum;
//     cout << mis_ep;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    long long a[n];
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        long long val;
        cin >> val;
        sum += val;
    }

    cout << (n * (n + 1)) / 2 - sum;

    return 0;
}