#include <bits/stdc++.h>
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0); cout.tie(0);
 map<ll,ll> m1;
 ll n, t, i;
 cin >> n >> t;
 vector<vector<ll>> a(n + 1, vector<ll>(n + 1));
 vector<ll> m2(2 * n, LLONG_MAX);
 for(int i = 1; i <= n; i++){
  for(int j = 1; j <= n; j++){
   cin >> a[i][j];
   m1[j - i] += a[i][j];
   m2[i + j] = min(m2[i + j], a[i][j]);
  }
 }
 while(t--){
  ll u, v;
  cin >> u >> v;
  cout << m1[v - u] << " " << m2[u + v] << endl;
 }
    return 0;
}