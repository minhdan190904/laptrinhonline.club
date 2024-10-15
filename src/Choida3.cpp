#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
ll bs(ll x, ll a[], ll n, ll c[]){
 ll res = -1;
 ll l = 0, r = n - 1;
 while(l<=r){
  ll m = (l+r)/2;
  if(a[m] >= c[x]){
   res = m;
   r = m - 1;
  }
  else l = m + 1;
 }
 return res;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n; cin >> n;
  ll c[n];
 ll a[n]; for(ll &x:a) cin >> x;
  for(int i = 0; i < n; i++){
  c[i] = a[i];
 }
 sort(a, a + n);
 ll b[n+1]; b[0] = 0;
 for(int i = 0; i < n; i++){
  b[i+1] = b[i] + a[i];
 }
 ll q; cin >> q;
 while(q--){
  ll x, res; cin >> x;
  ll k = bs(x, a, n, c);
  if(k==-1) res = c[x]*n-b[n];
  else res = k * c[x] - b[k] + (b[n]-b[k])-(n-k)*c[x];
  cout << res << endl;
 }
    return 0;
}