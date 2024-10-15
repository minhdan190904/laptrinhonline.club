#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long k = 2 * n;
    vector<pair<long long, long long>> res;

    for (long long i = 2; i * i <= k; i++)
    {
        if (k % i == 0)
        {
            long long temp = k / i + i - 1;
            if (temp % 2 == 0)
            {
                temp /= 2;
                res.push_back({temp + 1 - i, temp});
            }
        }
    }

    cout << res.size() << endl;
    for (auto x : res)
        cout << x.first << " " << x.second << endl;

    return 0;
}