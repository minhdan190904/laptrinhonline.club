#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 string s; cin >> s;
 map<char,int> m;
 for(char x:s){
  m[x] = 1;
 }
 for(char i = 'a'; i <= 'z'; i++){
  if(m[i] == 0) cout <<i;
 }
    return 0;
}