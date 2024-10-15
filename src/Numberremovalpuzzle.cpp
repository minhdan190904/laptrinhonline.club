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
 int n; cin>>n;
 int sum=0;
 vector<int> a(n); for(int &x:a){
  cin>>x; sum+=x;
 }
 int dp[n] = {};
 if(a[0]>0) dp[0]=a[0];
 if(a[1]>0) dp[1]=max(a[1],dp[0]);
 else dp[1]=dp[0];
 for(int i=2; i<n; i++){
  if(a[i]<=0) dp[i]=dp[i-1];
  else{
   dp[i]=max(dp[i-2]+a[i],dp[i-1]);
  }
 }
 int res=sum-dp[n-1];
 cout<<res;
    return 0;
}