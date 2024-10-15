#include "bits/stdc++.h"
using namespace std;
int main()
{
 int n; cin >> n;
 int cnt_c = 0;
 int a[n], res = 0;
 for(int &x : a)
 {
  cin >> x;
  if (x % 2 == 0) cnt_c++;
  res += x;
 }
 int cnt_l = n - cnt_c;
 int k = abs(cnt_l - cnt_c);
 if(k > 1) res -= k - 1;
 cout << res;
   return 0;
}