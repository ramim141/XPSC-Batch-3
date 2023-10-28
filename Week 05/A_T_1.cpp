#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int case_num = 1;
    while (true)
    {
        int N, Q;
        cin >> N >> Q;
        if (N == 0 && Q == 0)
        {
            break;
        }

        vector<int> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        cout << "CASE# " << case_num << ":\n";
        for (int i = 0; i < Q; i++)
        {
            int query;
            cin >> query;

            auto it = find(v.begin(), v.end(), query);
            if (it != v.end())
            {
                int position = distance(v.begin(), it) + 1;
                cout << query << " found at " << position << "\n";
            }
            else
            {
                cout << query << " not found\n";
            }
        }

        case_num++;
    }
    return 0;
}