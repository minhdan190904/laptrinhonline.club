#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
ll bs(ll x, ll k)
{
 ll l = 1, r = k * 2 - 1, temp, m;
 ll res = k * 2 - 1;
 while(l <= r)
 {
  m = (l + r) / 2;
  if(m <= k) temp = (1 + m) * m / 2;
  else temp = (1 + k) * k / 2 + (m - k) * (k-1+k-1-m+k+1) / 2;
  if(temp >= x)
  {
   res = m;
   r = m - 1;
  }
  else
  {
   l = m + 1;
  }
 }
 return res;
}
minhdan()
{
    ll t; cin >> t;
    while(t--)
    {
     ll x, k; cin >> k >> x;
     cout << bs(x, k) << endl;
 }
    return 0;
}