#include "bits/stdc++.h"
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template <typename T>
//using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
const int MOD = 1e9+7;

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 vector<int> dp(1e5+4);
 dp[0]=0;
 dp[1]=1;
 int t,temp;
 for(int i=2; i<=1e5+1; i++){
  t=i;
  temp=0;
  if(t%2==0){
   while(t%2==0){
    t/=2;
   }
  }
  
  for(int j=1; j*j<=t; j+=2){
   if(t%j==0){
    temp+=j;
    if(j*j!=t) temp+=t/j;
   }
  }
  dp[i]=temp+dp[i-1];
 }
 int n,a,b;cin>>n;
 int res;
 while(n--){
  cin>>a>>b;
  res=dp[b]-dp[a-1];
  cout<<res<<"\n";
 }
    return 0;
}