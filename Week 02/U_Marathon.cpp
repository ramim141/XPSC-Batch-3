#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--)
    {
        int cnt = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a < b)
            cnt++;
        if (a < c)
            cnt++;
        if (a < d)
            cnt++;

        cout << cnt << endl;
    }

    return 0;
}
