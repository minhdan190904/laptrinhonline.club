#include "iostream"
#include "algorithm"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n, m; cin>>n>>m;
 int x;
 int dp1[n+1][m+1] = {};
 int dp2[n+1][m+1] = {};
 int res = 0;
 for(int i = 1; i <= n; i++){
  for(int j = 1; j <= m; j++){
   cin>>x;
   if(x==1){
    dp1[i][j] = min({dp1[i][j-1], dp1[i-1][j], dp1[i-1][j-1]}) + 1;
    res = max(res, dp1[i][j]);
   }
   else{
    dp2[i][j] = min({dp2[i][j-1], dp2[i-1][j], dp2[i-1][j-1]}) + 1;
    res = max(res, dp2[i][j]);    
   }
  }
 }
 cout<<res;
    return 0;
}