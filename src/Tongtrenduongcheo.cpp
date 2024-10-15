#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n; cin >> n;
 ll a[n+1][n+1];
 for(int i = 1; i <= n; i++){
  for(int j = 1; j <= n; j++){
   cin >> a[i][j];
  }
 }
 int k = n;
 while(k--){
  int i = 1;
  ll s = 0;
  for(int j = k + 1; j <= n; j++){
   s += a[i++][j];
  }
  cout << s << endl;
 }
 k = n-1;
 vector<ll> r;
 int l = 0;
 while(k--){
  int i = n;
  ll s = 0;
  for(int j = 1 + l; j >= 1; j--){
   s += a[i][j];
   i--;
  }
  l++;
  r.push_back(s);
 }
 reverse(r.begin(), r.end());
 for(ll x:r) cout << x << endl;
    return 0;
}