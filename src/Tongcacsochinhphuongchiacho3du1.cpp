#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll t; cin >> t;
 while(t--){
 ll n; cin >> n;
 ll k = sqrt(n);
 ll m = k;
 while(m%3!=0){
  m--;
 }
 m /= 3;
 ll r1 = k*(k+1)*(2*k+1)/6;
 ll r2 = 9*m*(m+1)*(2*m+1)/6;
 cout << (r1-r2)%(1000000007) << endl;
}
    return 0;
}