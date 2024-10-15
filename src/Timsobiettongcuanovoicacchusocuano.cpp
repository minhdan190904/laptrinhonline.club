#include "bits/stdc++.h"
using namespace std;
#define ll long long
ll tt(ll n)
{
 ll res = n;
 while(n > 0)
 {
  res += n % 10;
  n /= 10;
 }
 return res;
}
ll cnt(ll n)
{
 ll c = 0;
 while(n > 0)
 {
  c++;
  n /= 10;
 }
 return c;
}
int main()
{
 ll n; cin >> n;
 ll k = cnt(n);
 ll s = n - 9 * k;
 ll cnt = 0;
 for(ll i = s; i < n; i++)
 {
  if (tt(i) == n)
  {
   cout << i << " ";
   cnt = 1;
  }
 }
 if (cnt == 0) cout << "-1";
  return 0;
}