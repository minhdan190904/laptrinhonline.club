#include "bits/stdc++.h"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

ll modInverse(ll a, ll m) {
    ll m0 = m;
    ll y = 0, x = 1;

    if (m == 1) return 0;

    while (a > 1) {
        ll q = a / m;
        ll t = m;

        m = a % m;
        a = t;
        t = y;

        y = x - q * y;
        x = t;
    }

    if (x < 0) x += m0;

    return x;
}

int main() {
    ll n;
    cin >> n;
    ll res;

    if (n % 2 != 0) {
        cout << 0;
        return 0;
    }

    res = 1;
    n /= 2;

    for (int i = 1; i <= n; i++) {
        // Perform modulo operation after each multiplication and division
        res = (res * (4 * i - 2)) % MOD;
        res = (res * modInverse(i + 1, MOD)) % MOD;
    }

    cout << res;
    return 0;
}