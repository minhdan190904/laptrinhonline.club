#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n,k;cin>>n>>k;
 ll a[n];for(ll &x:a) cin>>x;
 sort(a, a+n, greater<ll>());
 queue<int> q;
 ll cnt=0, res=0;
 for(ll x:a){
  q.push(x);
  if(q.front()>=k+x){
   q.pop();
  }
  else res+=x, cnt++;
 }
 cout<<cnt<<" "<<res;
 return 0;
}