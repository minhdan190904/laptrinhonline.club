#include "iostream"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n; cin>>n;
 int dp[n+5][5] = {};
 int x;
 for(int i = 1; i <= n; i++){
  for(int j = 0; j < 3; j++){
   cin>>x;
   dp[i][j] = x + max(dp[i-1][(j+1)%3], dp[i-1][(j+2)%3]);
  }
 }
 cout<<max(dp[n][0], max(dp[n][1], dp[n][2]));
    return 0;
}