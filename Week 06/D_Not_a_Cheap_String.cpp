#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n;
        cin >> n;
        string copy = s;
        sort(copy.begin(), copy.end());
        int sum = 0;
        vector<int> freq(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            sum += (s[i] - 'a') + 1;
            freq[s[i] - 'a']++;
        }
      
        for (int i = copy.size() - 1; i >= 0; i--)
        {
            if (sum <= n)
                break;
            else
            {
                char x = copy[i];
                sum -= ((x - 'a') + 1);
                freq[x - 'a']--;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (freq[s[i] - 'a'] >= 1)
            {
                cout << s[i];
                freq[s[i] - 'a']--;
            }
        }
        cout << "\n";
    }
}
