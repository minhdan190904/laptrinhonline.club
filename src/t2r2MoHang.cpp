#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n, m; cin >> n >> m;
 ll a[n]; for(ll &x : a) cin >> x;
 sort(a, a + n);
 ll temp = 0, k = 0, res = 0;
 for(int i = 0; i < n; i++){
  temp += a[i];
  if(temp > m){
   temp -= a[i];
   break;
  }
  res++;
  temp += a[i];
  if(temp > m){
   temp -= a[i];
   break;
  }
  res++;
  k++;
 }
 if(k!=n)
 {
  if((m-temp)>=a[k]/2) res++;
 }
 cout << res;
 return 0;
}