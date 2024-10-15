#include "bits/stdc++.h"
#define ll long long
#define db double
#define pll pair<long long, long long>
#define endl "\n"
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

vector<vector<ll>> a;
vector<vector<ll>> dp;
vector<vector<ll>> p;
int n, m;

void solve(){
 p[1][1] = 1;

 for (int i = 1; i <= n; ++i)
 {
  dp[i][0] = 1e18;
 }

 for (int i = 1; i <= m; ++i)
 {
  dp[0][i] = 1e18;
 }

 for (int i = 1; i <= n; ++i)
 {
  for (int j = 1; j <= m; ++j)
  {
   if(a[i][j] == 0){
    dp[i][j] = 1e18;
    continue;
   }

   if(dp[i][j-1] == dp[i-1][j]){
    p[i][j] += p[i][j-1] + p[i-1][j];
    dp[i][j] = dp[i][j-1] + a[i][j];
    if(dp[i][j-1] == 1e18){
     if(i == 1 and j == 1) dp[i][j] = a[i][j];
     else dp[i][j] = 1e18;
    }
   }
   else if(dp[i][j-1] < dp[i-1][j]){
    p[i][j] = p[i][j-1];
    dp[i][j] = dp[i][j-1] + a[i][j]; 
   }
   else{
    p[i][j] = p[i-1][j];
    dp[i][j] = dp[i-1][j] + a[i][j];
   }
  }
 } 
 cout<<dp[n][m]<<" "<<p[n][m];
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 cin>>n>>m;
 a.resize(n+5, vector<ll>(m+5));
 dp.resize(n+5, vector<ll>(m+5));
 p.resize(n+5, vector<ll>(m+5));

 for (int i = 1; i <= n; ++i)
 {
  for (int j = 1; j <= m; ++j)
  {
   cin>>a[i][j];
  }
 }

 solve();

    return 0;
}