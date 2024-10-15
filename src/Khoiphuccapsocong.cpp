#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll x;
 vector<ll> a;
 while(cin >> x){
  a.push_back(x);
 }
 ll n = a.size();
 bool c = a[1] < a[0];
 vector<ll> d;
 for(int i = 1; i < n; i++){
  d.push_back(a[i]-a[i-1]);
 }
 if(a[0] == a[1]) cout << "0";
 else{
  vector<ll> res;
  for(int i = 1; i < n-1; i++){
   res.push_back(abs(__gcd(d[i], d[i-1])));
  }
  ll m = *min_element(res.begin(), res.end());
  if(c) m *= -1;
  ll r = (a[n-1]-a[0])/m;
  r += 1;
  cout << r-n;
 }
    return 0;
}