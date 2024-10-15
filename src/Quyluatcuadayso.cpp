#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
 ll t,n; cin >> t;
 while(t--){
  cin>>n;
  ll temp = 0;
  ll res = 0;
  ll x=0;
 while(temp<=n)
 {
  temp =  1 + (x + 1) * x / 2;
  x++;
  res += temp;
 }
 cout<<res-temp<<endl;
}
    return 0;
}