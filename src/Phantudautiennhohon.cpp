#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
int bs(ll x, ll m[], ll n)
{
 ll l = 1, r = n;
 ll res = -1;
 while(l <= r)
 {
  ll M = (l + r) / 2;
  if(m[M] <= x)
  {
   res = M;
   r = M - 1;
  }
  else
  {
   l = M + 1;
  }
 }
 return res;
}
minhdan()
{
    ll n, k; cin >> n >> k;
    ll m[n+1];
    m[0] = INT_MAX;
    ll a[n]; for(ll &x : a) cin >> x;
    for(int i = 1; i <= n; i++)
    {
     m[i] = min(m[i-1], a[i-1]);
 }
    while(k--)
    {
     ll x; cin >> x;
     if(m[n] > x) cout << "0" << endl;
     else cout << bs(x, m, n) << endl;
 }
    return 0;
}