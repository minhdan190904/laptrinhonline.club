#include "bits/stdc++.h"
using namespace std;
#define hung_db main
hung_db()
{
 int n, t; cin >> n;
 int a[n];
 for(int &x : a) cin >> x;
 sort(a, a + n, greater<int>());
 int m = n / 3;
 int res = 0;
 for(int i = 0; i < m * 3; i += 3)
 {
  t = 0;
  t += a[i] * 1 / 3;
  t += a[i+1] * 1 / 3;
  t += a[i+2] * 1 / 3;
  if (t > a[i+2]) res += a[i] + a[i+1] + a[i+2] - t;
  else res += a[i] + a[i+1];
 }
 for(int i = m * 3; i < n; i++)
 {
  t = a[i] * 1 / 3;
  res += a[i] - t;
 }
 cout << res;
 return 0;
}