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
  ll ucln = 1, bcnn = 1;
  for(ll i = 1; i <= n; i++){
   bcnn = (bcnn*i)/__gcd(i,bcnn);
  }
  ll tu = 0, mau = bcnn;
  for(int i = 1; i <= n; i++){
   tu += mau/i;
  }
  ll te = __gcd(tu,mau);
  tu /= te;
  mau /= te;
  cout << tu <<"/" << mau << endl;
 }
    return 0;
}