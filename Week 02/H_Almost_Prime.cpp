#include <bits/stdc++.h>

using namespace std;


bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

int countAlmostPrimes(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        int divisors = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0 && isPrime(j))
            {
                divisors++;
            }
            if (divisors > 2)
                break;
        }

        if (divisors == 2)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    int result = countAlmostPrimes(n);
    cout << result << endl;

    return 0;
}
