#include <bits/stdc++.h>
using namespace std;
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define MOD 1000000007
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define aventurine_ve_di main
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

aventurine_ve_di(){
    setup();
 int n;
 cin >> n;
 char a[n+4][n+4];
 int dp[n+10][n+10];
 memset(dp, 0, sizeof(dp));
 for(int i = 1; i <= n; i++){
  for(int j = 1; j <= n; j++){
   cin >> a[i][j];
  }
 }
 for(int i = 1; i <= n; i++){
  for(int j = 1; j <= n; j++){
   if(a[i][j] == '.'){
    if(i == 1 && j == 1) dp[1][1] = 1;    
    else {
        dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
     dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD; 
    }
   }
  }
 }
 cout << dp[n][n];
 return 0;
}