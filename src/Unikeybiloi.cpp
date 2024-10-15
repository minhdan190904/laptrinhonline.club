#include "bits/stdc++.h"
using namespace std;
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define MOD 1000000007
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define aventurine_ve_di main
#define pii pair<int,int>
#define x first
#define y second
void setup(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fastIO
}

aventurine_ve_di(){
 string s,string,temp,res;
 unordered_set<int> m;
 m.insert('@');
 m.insert('#');
 m.insert('$');
 m.insert('%');
 while(cin>>s){
  temp="";
  res="";
  for(char x:s){
   if(m.find(x)!=m.end()) temp+=x;
   else res+=x;
  }
  cout<<res<<temp;
  cout<<" ";
 }
 return 0;
}