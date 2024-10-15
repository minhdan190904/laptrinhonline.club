#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n;cin>>n;
 if(n==0) cout<<"0";
 else{
  ll k = 2+(n-1)*3;
  ll res = (k+2)*n/2;
  cout<<res;
 }
    return 0;
}