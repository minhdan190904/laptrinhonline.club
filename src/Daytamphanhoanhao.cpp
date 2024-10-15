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
kazuha_ve_di(){
 int n;cin>>n;
 string s = "";
 if(n%3!=0){
  cout<<"-1";return 0;
 }
 else{
  for(int i = 0; i <= 2; i++){
   for(int j = 0; j < n/3; j++){
    s += i+'0';
   }
  }
  do{
   cout<<s<<endl;
  }while(next_permutation(s.begin(),s.end()));
 }
 return 0;
}