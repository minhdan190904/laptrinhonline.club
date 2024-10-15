#include "bits/stdc++.h"
using namespace std;
int main()
{
 int t; cin >> t;
 while(t--)
 {
  int m, n, k; cin >> n >> m >> k;
  int res = n / m;
  int nap = res, te;
  while(nap >= k)
  {
   te = nap / k;
   nap -= te * k;
   res += te;
   nap += te;
  }
  cout << res << endl;
 }
    return 0;
}