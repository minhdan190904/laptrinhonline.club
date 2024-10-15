#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define MOD 1000000007
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define x first
#define y second

using namespace std;

int n, m;
vector<vector<int>> a;
vector<vector<int>> dp;

void reverse_matrix(){
    for(int i=0; i<m; ++i){
        reverse(a[i].begin(), a[i].end());
    }
}


signed main(){
 fastIO
    cin>>m>>n;
    a.resize(m, vector<int>(n, 0));
    dp.resize(m, vector<int>(n, 0));
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            cin>>a[i][j];
        }
    }
    reverse_matrix();
    unordered_map<int,int> um1;
//    unordered_map<int,int> um2;
    for(int i = 0; i < m-1; i++){
     um1.clear();
//     um2.clear();
     for(int j = 0; j < n; j++){
      if(i==0){
       um1[a[i][j]]++;
       dp[i+1][j] = um1[a[i+1][j]];
      }
      else{
       um1[a[i][j]] = (um1[a[i][j]] + dp[i][j])%MOD;
       dp[i+1][j] = um1[a[i+1][j]];
   }
  }
 }
 int res=0;
 for(int i = 0; i < n; i++) res = (res+dp[m-1][i])%MOD;
 cout<<res;
    return 0;
}