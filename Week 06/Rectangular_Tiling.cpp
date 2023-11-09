#include <iostream>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int w, l;
        cin >> w >> l;
        bool p = (w % 2 == 0 || l % 2 == 0);
        if (p)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}