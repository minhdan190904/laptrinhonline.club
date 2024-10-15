#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
const int MOD = 1000000007;
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
 int t; cin >> t;
 while(t--){
  string s; cin >> s;
  int n = s.size();
  map<char, ll> m;
  for(char x:s) m[x]++;
  ll res=1;
  ll x=0;
  for(auto it:m){
   res*=th(n,it.second);
   res%=MOD;
   n-=it.second;
  }
  cout << res << endl;
 }
    return 0;
}