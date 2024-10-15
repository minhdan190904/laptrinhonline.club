#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int t; cin >> t;
 while(t--){
  ll n; cin >> n;
  ll te = n;
  map<ll,ll> m;
  int temp;
  for(int i = 2; i * i <= n; i++)
  {
   if(n % i == 0)
   {
    temp = 0;
    while(n % i == 0)
    {
     temp++;
     n /= i;
    }
    m[i] = temp;
   }
  }
  if(n != 1) m[n] = 1;
  ll res = 1;
  for(auto it : m){
   if(it.second > 1) res *= (pow(it.first, it.second/2));
  }
  ll res1 = te / pow(res, 2);
  cout << res << " " << res1 << endl;
 }
    return 0;
}