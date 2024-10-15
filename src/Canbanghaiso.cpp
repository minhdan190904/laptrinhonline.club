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
 while(n--){
  ll a, b; cin >> a >> b;
  if(a==b) cout <<"0"<<endl;
  else{
   ll k = 2*a+2*b;
   ll g = 1; ll res;
   ll m = max(a,b);
   while(1){
       res = g*(g+1) + k;
       if(res%4==0 and (ll)res/4 >= m){
        cout << g << endl;
        break;
       }
       g++;
   }
  }
 }
    return 0;
}