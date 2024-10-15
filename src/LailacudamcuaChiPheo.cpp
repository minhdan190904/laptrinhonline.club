#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for (int i=a;i<=b;i++)
#define FOD(i,a,b) for (int i=a;i>=b;i--)
#define TIME "Time elapsed : "<<(double)clock()/1000<<" s"
#define int long long
#define pii pair<int,int>
const int MOD=1e9+7,INF=4e18;
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int t; cin >> t;
 while(t--){
  int n; cin >> n;
  if(n==1) cout <<"1" << endl;
  else{
   int res = n%MOD;
   res = (res * ((n+1)%MOD))%MOD;
   res = (res * ((n+2)%MOD))%MOD;
   res = (res * 166666668) % MOD;
   cout << res << endl;
  }
 }
    return 0;
}