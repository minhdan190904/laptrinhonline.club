#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
const int MOD = 1e9 + 7;
ll de2(ll n, ll p){
 ll res = 0;
 for(ll i = p; i <= n; i*= p){
  res += n / i;
 }
 return res + 1;
}
bool check(ll n){
 for(ll i = 2; i*i <= n; i++){
  if(n%i==0)return false;
 }
 return n > 1;
}
ll solve(ll n){
 ll res = 1;
 for(ll i = 2; i <= n; i++){
  if(check(i)){
   res *= de2(n, i);
   res %= MOD;
  }
 }
 return res;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n; cin >> n;
 cout << solve(n);
    return 0;
}
// y tuong 28tech