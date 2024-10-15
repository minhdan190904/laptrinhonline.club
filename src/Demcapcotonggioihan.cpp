#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ll n, k; cin >> n >> k;
    ll a[n]; for(ll &x : a) cin >> x;
    sort(a, a + n);
    ll l = 0, r = n - 1;
    ll res = 0;
    while(l <= r)
    {
     if(a[l] + a[r] <= k)
     {
      res += r - l;
      l++;
  }
  else r--;
  }
  cout << res;
    return 0;
}