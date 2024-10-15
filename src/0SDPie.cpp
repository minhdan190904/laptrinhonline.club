#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
bool check(ll a[], ll n, ll f, db v){
 ll cnt = 0, t;
 for(int i = 0; i < n; i++){
  t = a[i] * a[i] * M_PI / v;
  cnt += t;
 }
 return cnt >= (f+1);
}
db cal(ll a[], ll n, ll f){
 db res = 0;
 for(int i = 0; i < n; i++){
  res += a[i] * a[i] * M_PI;
 }
 return res/(f+1);
}
db solve(ll a[], ll n, ll f){
 db l = 0, r = cal(a, n, f), m;
 while(r - l >= 0.0000001){
  db m = (r + l) / 2;
  if(check(a, n, f, m)) l = m;
  else r = m;
 }
 return l;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll t; cin >> t;
 while(t--){
  ll n, f; cin >> n >> f;
  ll a[n]; for(ll &x:a) cin >> x;
  db res = solve(a, n, f);
   res = ceil(res * 1000) / 1000;
cout << res << endl;
 }
    return 0;
}