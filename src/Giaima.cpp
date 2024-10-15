#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
ll tong(string s){
 ll res = 0;
 for(int i = 0; i < s.size(); i++){
  res += s[i] - '0';
 }
 return res;
}
minhdan()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll k;
 string s; cin >> s;
 ll n = stoll(s);
 if(n != 2) k = n - (s.size()-1)*9;
 else k = 1;
 for(ll i = k; i < n; i++){
  if(tong(to_string(i)) + i == n){
   cout << i;
   return 0;
  }
 }
    return 0;
}