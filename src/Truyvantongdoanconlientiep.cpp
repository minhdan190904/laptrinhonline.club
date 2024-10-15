#include "bits/stdc++.h"
#define ll long long
#define kenshi main
using namespace std;
kenshi()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL); cout.tie(NULL);
 ll n, k; cin >> n >> k;
 ll a[n]; for(ll &x : a) cin >> x;
 ll p[n+1]; p[0] = 0;
 for(int i = 0; i < n; i++)
 {
  p[i+1] = p[i] + a[i];
 }
 while(k--)
 {
  int l, q;
  cin >> l >> q;
  cout << p[q] - p[l-1] << endl;
 }
 return 0;
}