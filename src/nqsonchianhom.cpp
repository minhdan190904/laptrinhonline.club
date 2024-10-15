#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
#define endl "\n"
using namespace std;
ll bs(ll n, ll k){
 ll l = n, r = k;
 ll L = n, R = k;
 ll res = k - n + 1, m, t1, t2;
 while(l <= r){
  m = (l + r)/2;
  t1 = (m + L) * pow(m - L + 1, 2)/2;
  t2 = (m+R+1) * pow(R-m, 2) / 2;
  if(t1 >= t2)
  {
    r = m - 1;
    res = m;
  }
  else l = m + 1;
 }
 return (res-n+1);
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll t; cin >> t;
 while(t--){
  ll n, x; cin >> n >> x;
  ll m = x + n - 1;
  cout << bs(n, m) << endl;
 }
    return 0;
}