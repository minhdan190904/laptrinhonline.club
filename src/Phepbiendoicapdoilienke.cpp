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
 ll sum = 0;
 ll a[n]; for(ll &x:a){
  cin >> x;
  sum += x;
 }
 if(sum%2!=0)cout<<"NO";
 else{
  ll res = 0;
  for(int i = 0; i < n-1; i++){
   if(a[i]%2!=0){
    a[i]++;
    a[i+1]++;
   }
   res += a[i];
  }
  res += a[n-1];
  cout << res-sum;
 }
    return 0;
}