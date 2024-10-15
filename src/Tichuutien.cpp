#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n, m, q; cin >> n >> m >> q;
 ll a[n], b[m];
 for(ll &x:a) cin >> x;
 for(ll &x:b) cin >> x;
 ll h1[n+1], k1[n+1];
 h1[1] = a[0];
 k1[1] = a[0];
 for(int i = 1; i < n; i++){
  h1[i+1] = max(h1[i], a[i]);
  k1[i+1] = min(k1[i], a[i]);
 }
 ll h2[m+1], k2[m+1];
 h2[1] = b[0];
 k2[1] = b[0];
 for(int i = 1; i < m; i++){
  h2[i+1] = max(h2[i], b[i]);
  k2[i+1] = min(k2[i], b[i]);
 }
 while(q--){
  ll u, v, res1, res2; cin >> u >> v;
  vector<ll> p;
  p.push_back(h1[u]*h2[v]);
  p.push_back(h1[u]*k2[v]);
  p.push_back(k1[u]*h2[v]);
  p.push_back(k1[u]*k2[v]);
  res1 = *max_element(p.begin(), p.end());
  res2 = *min_element(p.begin(), p.end());
  cout << res1 << " " << res2 << endl;
 }
 return 0;
}