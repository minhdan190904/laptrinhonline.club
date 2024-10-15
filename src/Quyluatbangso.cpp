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
 int u,v; cin >> u >> v;
 int a[102][102];
 FOR(i,1,100) a[i][1] = 1;
 FOR(j,1,100) a[1][j] = 1;
 FOR(i,1,100){
  FOR(j,1,100){
   if(i != 1 && j != 1){
    if(i >= 61) a[i][j] = -1;
    else a[i][j] = a[i-1][j] + a[i-1][j-1];
   }
  }
 }
 cout << a[u][v];
    return 0;
}