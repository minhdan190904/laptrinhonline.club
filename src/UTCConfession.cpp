#include "bits/stdc++.h"
#define ll long long
using namespace std;
int main()
{
 ll n, m; cin >> n >> m;
 ll a[n], r[n+1];
 r[0] = m;
 for (int i = 0; i < n; i++)
 {
  cin >> a[i];
  r[i+1] = r[i] + a[i];
 }
 ll t; cin >> t;
 while(t--)
 {
  ll q; cin >> q;
  cout << r[q] << endl;
 }
    return 0;
}