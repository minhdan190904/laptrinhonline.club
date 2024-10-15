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
 int n,k,x ;cin>>n>>k;
 if(k==n){
  cout<<1; return 0;
 }
 
 if(k==2){
  cout<<n-1; return 0;
 }
 int pos_1=0;
 for(int i=1;i<=n;i++){
  cin>>x;
  if(x==1) pos_1=i;
 }
 k--;
 int dau = pos_1-1;
 int duoi = n-pos_1;
 int res=0;
 res+=dau/k;
 res+=duoi/k;
 int du=0;
 du+=dau%k;
 du+=duoi%k;
 if(du>k) res+=2;
 else res+=1;
 cout<<res;
 cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}