#include "bits/stdc++.h"
#define int long long
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
 int a,b,da,db; cin>>a>>b;
 int k1=a/4;
 int k2=b/4;
 int res=min(k1,k2);
   da=a-4*res;
  db=b-4*res;
  res*=2;
 if(da>=3 and db>0) res++;
 else if(db>=3 and da>0) res++;
 cout<<res;
    return 0;
}