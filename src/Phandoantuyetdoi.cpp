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
 ll a[n];
 ll m1 = 0, m2 = INT_MAX;
 for(int i = 0; i < n; i++){
  cin >> a[i];
  m1 = max(m1, abs(a[i]));
  m2 = min(m2, abs(a[i]));
 }
 ll b[n+1];
 b[0] = 0;
 for(int i = 0; i < n; i++){
  b[i+1] = a[i] + b[i];
 }
 ll k1 = 0, k2 = INT_MAX;
 for(int i = 1; i <= n; i++){
  k1 = max(k1, abs(b[i]));
  k2 = min(k2, abs(b[i]));
 }
 sort(b + 1, b + n + 1);
 ll m = INT_MAX;
 for(int i = 2; i <= n; i++){
  m = min(m, abs(b[i]-b[i-1]));
 }
 ll res1 = max(m1, max(k1, abs(b[n]-b[1])));
 ll res2 = min(m2, min(k2, m));
 cout << res1 << " "  << res2;
    return 0;
}