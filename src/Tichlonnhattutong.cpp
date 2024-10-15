#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
const int MOD = 1e9 + 7;
ll solve(ll a, ll b, ll c) {
    ll res = 1;
    a = a % c;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % c;
        }
        b = b / 2;
        a = (a * a) % c;
    }
    return res;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n; cin >> n;
    if (n < 5) cout << n;
    else
        {
        ll k = n % 3;
        ll h = n / 3;
        if (k == 0) cout << solve(3, h, MOD);
        else if (k == 2) cout << (solve(3, h, MOD) * 2)%MOD;
        else cout << (solve(3, h - 1, MOD) * 4)%MOD;
        }
    return 0;
}