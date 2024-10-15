#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
ll cnt(string s, char c){
 ll cnt = 0;
 for(char x:s){
  if(x==c) cnt++;
 }
 return cnt;
}
string doi(string s){
 int k = s.size();
    for(int i = 0; i < k; i++){
    if(s[i] == '1') s[i] = '0';
    else s[i] = '1';
   }
   return s;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n; cin >>n;
 string s; cin >>s;
 ll dem = cnt(s, '1');
 ll d = cnt(s, '0');
 if(dem % 2==0) cout <<s;
 else{
  if(n%2==0 and d%2!=0) cout <<s;
  else cout << doi(s);
 }
    return 0;
}