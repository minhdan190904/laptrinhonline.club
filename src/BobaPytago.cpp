#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
ll solve1(ll a, ll b, ll c){
 ll k1 = b*b+c*c;
 ll k2 = sqrt(k1);
 if(k2*k2!=k1) return -1;
 return abs(k2-a);
}
ll solve2(ll a, ll b, ll c){
 ll k1 = a*a-b*b;
 ll k2 = sqrt(k1);
 if(k2*k2!= k1 || a==b) return -1;
 return abs(k2-c);
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll a, b, c; cin >> a >> b >> c;
 vector<ll> r;
 r.push_back(a);
 r.push_back(b);
 r.push_back(c);
 sort(r.begin(), r.end(), greater<ll>());
 ll k1 = solve1(r[0],r[1],r[2]);
 ll k2 = solve1(r[1],r[0],r[2]);
 ll k3 = solve1(r[2],r[0],r[1]);
    ll k4 = solve2(r[0],r[1],r[2]);
 ll k5 = solve2(r[0],r[2],r[1]);
 ll k6 = solve2(r[1],r[2],r[0]);
 vector<ll> h;
 h.push_back(k1);
 h.push_back(k2);
 h.push_back(k3);
 h.push_back(k4);
 h.push_back(k5);
 h.push_back(k6);
 sort(r.begin(), r.end());
 for(ll x:h){
  if(x!=-1){
   cout<<x;
   return 0;
  }
 }
 cout<<"-1";
    return 0;
}