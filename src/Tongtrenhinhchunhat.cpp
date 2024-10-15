#include "bits/stdc++.h"
#define ll long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll n, m, q; cin>>n>>m>>q;
 ll a[n+5][m+5] = {};
 ll dp[n+5][m+5] = {};
 ll t[n+5][m+5] = {};
 for(ll i = 1; i <= n; i++){
  for(ll j = 1; j <= m; j++){
   cin>>a[i][j];
   t[i][j] = t[i][j-1] + a[i][j];
   dp[i][j] = t[i][j] + dp[i-1][j];
  }
 }

 while(q--){
  ll r1,r2,c1,c2; cin>>r1>>r2>>c1>>c2;
  cout<<dp[r2][c2]-dp[r2][c1-1]-(dp[r1-1][c2]-dp[r1-1][c1-1])<<endl;
 }
    return 0;
}