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
  ll b[n+1] = {};
  for(int i = 1; i <= n; i++){
   for(int j = 1; j <= n; j++){
    if(j%i==0){
     if(b[j]==1) b[j]=0;
     else b[j]=1;
    }
   }
  }
  ll res = 0;
  for(int i = 1; i <= n; i++){
   if(b[i]==0) res++;
  }
  cout << res << endl;
 }
    return 0;
}