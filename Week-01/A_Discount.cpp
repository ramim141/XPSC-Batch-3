#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, D;
    cin >> A >> B;

    D = A - B;
    double f = ((D / A) * 100);
    cout << f << endl;

    return 0;
}