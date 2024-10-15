#include "bits/stdc++.h"
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template <typename T>
//using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
const int MOD = 1e9+7;

using namespace std;

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int k,n,x; cin>>k>>n;
 if(k==1){
  cout<<1; return 0;
 }
 int dp[k+1] = {};
 while(n--){
  cin>>x; dp[x]=-1;
 } 
 if(dp[2]==-1) dp[2]=0;
 else dp[2]=1;
 dp[1]=1;
 for (int i = 3; i <= k; ++i)
 {
  if(dp[i]!=-1){
   dp[i]=(dp[i-2]+dp[i-1])%MOD;
  }
  else dp[i]=0;
 }
 cout<<dp[k];
 cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}