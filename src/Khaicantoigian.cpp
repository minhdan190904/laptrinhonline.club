#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for (int i=a;i<=b;i++)
#define FOD(i,a,b) for (int i=a;i>=b;i--)
#define TIME "Time elapsed : "<<(double)clock()/1000<<" s"
#define int long long
#define pii pair<int,int>
const int MOD=1e9+7;
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n,k; cin >> n >> k;
 int l = n;
 map<int,int> m;
  for(int i = 2; i * i <= n; i++){
   int cnt = 0;
   if(n%i==0){
   while(n%i== 0){
    cnt++;
    n/=i;
   }
   m[i] = cnt;
  } 
  }
  if(n != 1) m[n] = 1;
  int res = 1;
  for(auto it:m){
      int h = it.second / k;
      res *= pow(it.first, h);
  }
  int res1 = l/pow(res,k);
  cout << res << " "<< res1;
    return 0;
}