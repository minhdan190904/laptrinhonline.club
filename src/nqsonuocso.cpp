#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
bool snt(ll n){
 for(ll i = 2; i * i <= n; i++){
  if(n%i==0) return false;
 }
 return true;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n; cin >> n;
 if(snt(n)) cout << "1";
 else{
 
 ll N = n;
 vector<ll> a;
 for(ll i = 2; i * i <= n; i++){
  if(snt(i)){
   if(n%i==0){
    while(n%i==0){
     n /= i;
    }
    a.push_back(i);
   }
  }
 }
 if(n!=1) a.push_back(n);
 set<ll> s;
 s.insert(N);
 s.insert(1);
 queue<ll> q;
 ll k, h;
 q.push(N);
 while(!q.empty()){
  k = q.front();
  q.pop();
  for(ll x:a){
   if(k%x==0){
    h = k/x;
    if(!snt(h)){
     s.insert(h);
     q.push(h);
    }
   }
  }
 }
 cout << s.size();
}
    return 0;
}