#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
struct mb
{
 ll s, e, p;
};
bool sx(mb a, mb b)
{
 return a.s < b.s;
}
minhdan()
{
 ll n, m = 0, temp = 0; cin >> n;
 mb a[n];
 for(int i = 0; i < n; i++)
 {
  cin >> a[i].s >> a[i].e >> a[i].p;
  a[i].e += a[i].s;
 }
 sort(a, a + n, sx);
 for (int i = 1; i < n; i++)
 {
  for (int j = 0; j < i; j++)
  {
   if (a[i].s >= a[j].e) temp = max(temp, a[j].p);
  }
  a[i].p += temp;
 }
 for(int i = 0; i < n; i++)
 {
  if(a[i].p > m) m = a[i].p;
 }
 cout << m;
    return 0;
}