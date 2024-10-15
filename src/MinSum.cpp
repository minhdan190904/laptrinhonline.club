#include "iostream"
#include "algorithm"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;
int dp[100009][9] = {};
main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n,m; cin>>n>>m;
 int x;
 for(int i = 1; i <= n; i++){
  for(int j = 0; j < m; j++){
   cin>>x;
   if(m==3) dp[i][j] = x + min({dp[i-1][(j+1)%3], dp[i-1][(j+2)%3]});
   else if(m==4) dp[i][j] = x + min({dp[i-1][(j+1)%4], dp[i-1][(j+2)%4], dp[i-1][(j+3)%4]});
   else if(m==5) dp[i][j] = x + min({dp[i-1][(j+1)%5], dp[i-1][(j+2)%5], dp[i-1][(j+3)%5], dp[i-1][(j+4)%5]});
  }
 }
 int res = 1e18;
 for(int i = 0; i < m; i++) res = min(dp[n][i], res);
 cout<<res;
    return 0;
}