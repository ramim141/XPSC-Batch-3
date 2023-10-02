#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int n;
    cin >> n;

    vector<set<string>> words(3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string word;
            cin >> word;
            words[i].insert(word);
        }
    }

    vector<int> points(3, 0);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i != j)
            {
                set<string> common_words;
                set_intersection(words[i].begin(), words[i].end(),
                                 words[j].begin(), words[j].end(),
                                 inserter(common_words, common_words.begin()));
                int unique_words = n - common_words.size();
                points[i] += unique_words;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << points[i] << " ";
    }

    cout << endl;

    return 0;
}
