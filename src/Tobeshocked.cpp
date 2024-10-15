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
 string s; cin>>s;
 int cnto = 0;
 int cnta = 0;
 int res = 0;
 for(auto x:s){
  if(x=='O'){
   res += cnta;
   cnto++;
  }
  else if(x=='A'){
   cnta += cnto;
  }
 }
 cout<<res;
 return 0;
}