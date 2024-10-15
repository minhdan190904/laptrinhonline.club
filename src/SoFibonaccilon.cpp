#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
string slv(string a, string b)
{
 int n = a.size(), m = b.size(), i;
 int x[n], y[n], z[n+1], temp, nh = 0;
 reverse(a.begin(), a.end());
 reverse(b.begin(), b.end());
 string res = "";
 for(i = 0; i < n; i++) x[i] = a[i] -'0';
 for(i = 0; i < m; i++) y[i] = b[i] -'0';
 for(i = m; i < n; i++) y[i] = 0;
 for(i = 0; i < n; i++)
 {
  temp = x[i] + y[i] + nh;
  z[i] = temp%10;
  nh = temp/10;
  res += to_string(z[i]);
 }
 if(nh == 1)
 {
  res += "1";
 }
 reverse(res.begin(), res.end());
 return res;
}
minhdan()
{
    int n; cin >> n;
    string f[n+1];
    f[1] = "1", f[2] = "1";
    for(int i = 3; i <= n; i++)
    {
     f[i] = slv(f[i-1], f[i-2]);
 }
 cout << f[n];
    return 0;
}