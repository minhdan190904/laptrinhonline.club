#include "bits/stdc++.h"
using namespace std;
#define int long long
#define db double
#define pii pair<int,int>
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
const int MOD = 1e9+7;
vector<int> a[100005];
int dp[100005] = {};
int n,m;
int dfs(int i) {
    if (i == n) return 1;
    if (dp[i]) return dp[i];
    int res = -1e9;
    for (int j: a[i]) {
        if (res < dfs(j)+1) {
            res = dfs(j)+1;
        }
    }
    return dp[i] = res;
}

void solve(){
int cc = dfs(1);
 if(cc>=0)cout<<cc;
 else cout<<"Hello World!";
}

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 cin>>n>>m;
 pii be[m];
 for(int i = 0; i < m; i++){
  cin>>be[i].first>>be[i].second;
 }
 for(auto x:be){
  a[x.first].push_back(x.second);
 }
 solve();
 cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}