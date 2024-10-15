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
  ll res = 1;
  for(int i = 2; i * i <= n; i++)
  {
   if(n % i == 0)
   {
    while(n % i == 0)
    {
     n /= i;
    }
    res *= i;
   }
  }
  res *= n;
  cout << res;
    return 0;
}