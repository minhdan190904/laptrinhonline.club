#include "bits/stdc++.h"
using namespace std;
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define FOD(i,a,b) for(int i=a;i>=b;i--)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define MOD 1000000007
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define kazuha_ve_di main
void setup(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fastIO
}

int qhd(int n){
    if(n<=1) return 1;
    int dp[n+1] = {};
    dp[0] = dp[1] = 1;
    dp[2] = dp[3] = 0;
    for(int i = 4; i <= n; i++){
        dp[i] = (((((i+1) * dp[i-1]) % MOD - (((i-2)*dp[i-2]) % MOD)) % MOD - (((i-5)*dp[i-3]) % MOD)) % MOD + (((i-3)*dp[i-4]) % MOD)) % MOD;
        dp[i] = (dp[i] + MOD) % MOD;
    }
    return dp[n];
}



kazuha_ve_di(){
 int n; cin>>n; cout<<qhd(n);
 return 0;
}