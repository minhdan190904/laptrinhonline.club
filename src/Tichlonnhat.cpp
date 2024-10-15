#include <iostream>
using namespace std;

long long slv(long long n, long long k)
{
    long long res = 1;
    for (long long i = 0; i < k; i++)
    {
        res *= n;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n < 5)
            cout << n << endl;
        else
        {
            long long k = n % 3;
            long long h = n / 3;
            if (k == 0)
                cout << slv(3LL, h) << endl;
            else if (k == 2)
                cout << slv(3LL, h) * 2 << endl;
            else
                cout << slv(3LL, h - 1) * 4 << endl;
        }
    }
    return 0;
}