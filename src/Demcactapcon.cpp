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
 int n,k;cin>>n>>k;
 int a[n]; for(int& x:a) cin>>x;
 int dp[k+1];
 for(int& x:dp) x=0;
 dp[0]=1;
 for(int i=0; i<n; i++){
  for(int j=k; j>=a[i]; j--){
   dp[j]=(dp[j-a[i]]+dp[j])%MOD; 
  }
 }
 if(k==0) cout<<0;
 else cout<<dp[k];
 cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}