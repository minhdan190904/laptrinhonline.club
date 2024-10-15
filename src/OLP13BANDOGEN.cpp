#include "bits/stdc++.h"
using namespace std;
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define MOD 1000000007
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define kazuha_ve_di main
#define pss pair<string,string>
#define x first
#define y second
void setup(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fastIO
}


kazuha_ve_di(){
 fastIO
 string s;
 int n,k; cin>>n>>k;
 int t = n;
 map<pss, int> m1;
 map<pss, int> m2;
 int res1 = 0;
 int res2 = 0;
 while(t--){
  cin>>s;
  if(s.size()>=k) m1[{s.substr(0, k), s.substr(s.size()-k)}]++;
  if(s.size()>=k+1) m2[{s.substr(0, k+1), s.substr(s.size()-k-1)}]++;
 }
 for(auto it:m1){
  if(it.y!=0) res1 += it.y*(it.y-1)/2;
 }
 for(auto it:m2){
  if(it.y!=0) res2 += it.y*(it.y-1)/2;
 }
 cout<<res1-res2;
 return 0;
}