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
 int a[n]; for(int i = 0; i <n;i++) a[i]=i+1;
 int cnt=0;
 do{
  for(int i = 1; i < n; i++){
   if((a[i]+a[i-1])%4==0) goto ve;
  }
  for(int i = 0; i < n; i++) cout<<a[i]<<" ";
  cout<<"\n";
  cnt++;
  ve:cnt--;
  cnt++;
 }while(next_permutation(a,a+n));
 cout<<cnt;
 cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}