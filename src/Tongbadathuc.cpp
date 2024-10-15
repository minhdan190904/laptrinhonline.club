#include "bits/stdc++.h"
#define db double
int ma(int a, int b)
{
 if(a > b) return a;
 return b;
}
using namespace std;
int main()
{
 int m; cin >> m;
 db a[m+1]; for(db &x : a) cin >> x;
 int n; cin >> n;
 db b[n+1]; for(db &x : b) cin >> x;
 int k; cin >> k;
 db c[k+1]; for(db &x : c) cin >> x;
 int g = ma(ma(m, n), k);
 db r[g];
 for(int i = 0; i <= g; i++)
 {
  r[i] = 0.0;
  if(i <= m) r[i] += a[i];
  if(i <= n) r[i] += b[i];
  if(i <= k) r[i] += c[i];
 }
 int res = g + 1;
 for(int i = g; i >= 0; i--)
 {
  if(r[i] != 0) break;
  else res--;
 }
 int h = 1;
 for(int i = 0; i < res; i++)
 {
  cout << fixed << setprecision(2) << r[i] << " ";
  h = 0;
 }
 if (h == 1) cout << "0.00";
    return 0;
}