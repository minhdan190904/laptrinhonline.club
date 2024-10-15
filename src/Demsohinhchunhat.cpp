#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
const ll MOD = 1000000007;
using namespace std;
long long mod_pow(long long base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
long long th(int n, int k) {
    if (k > n - k) {
        k = n - k;
    }
    long long numerator = 1;
    long long denominator = 1;
    for (int i = 0; i < k; ++i) {
        numerator = (numerator * (n - i)) % MOD;
        denominator = (denominator * (i + 1)) % MOD;
    }
    long long result = (numerator * mod_pow(denominator, MOD - 2, MOD)) % MOD;
    return result;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n, m; cin >> m >> n;
 if(n==1 && m==1) cout << "1";
 else{
  ll res1 = th(n+1,2);
  ll res2 = th(m+1,2);
  ll res = (res1 * res2) % MOD;
  cout << res;
  }
    return 0;
}