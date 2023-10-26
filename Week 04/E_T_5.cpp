#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> palindrome;
    int mx = 1 << 15;
    for (int i = 0; i < mx; i++)
    {
        string s = to_string(i);
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s == rev)
        {
            palindrome.push_back(i);
        }
    }

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        long long ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindrome.size(); j++)
            {
                if (freq.find(arr[i] ^ palindrome[j]) != freq.end())
                {
                    ans = ans + freq[arr[i] ^ palindrome[j]];
                }
            }
        }

        cout << ans / 2 << "\n";
    }

    return 0;
}