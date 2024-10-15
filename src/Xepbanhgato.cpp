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
 int t, n; cin>>t;
 while(t--){
  cin>>n;
  int a[n], b[n];
  int tu_so = 0, mau_so = 0;
  for(int i = 0; i < n; i++){
   cin>>a[i]>>b[i];
   mau_so = max(mau_so, b[i]);
  }
  for(int i = 0; i < n; i++){
   tu_so += a[i]*(mau_so/b[i]);
  }
  if(tu_so == mau_so) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 }
    return 0;
}