#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, N;
    cin >> t;

    while (t--)
    {
        cin >> N;
        vector<vector<int>> P(N, vector<int>(N - 1));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N - 1; j++)
            {
                cin >> P[i][j];
            }
        }

        vector<int> frequency(N + 1);
        for (int i = 0; i < N; i++)
        {
            frequency[P[i][0]]++;
        }

        int maximum = 0;
        int number = -1;
        for (int i = 1; i <= N; i++)
        {
            if (frequency[i] > maximum)
            {
                number = i;
                maximum = frequency[i];
            }
        }
        cout << number << " ";
        for (int i = 0; i < N; i++)
        {
            if (P[i][0] != number)
            {
                for (int j = 0; j < N - 1; j++)
                {
                    cout << P[i][j] << " ";
                }
                break;
            }
        }
        cout << "\n";
    }

    return 0;
}