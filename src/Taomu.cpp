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
 map<int,int> m;
 for(int i = 2; i*i<=n;i++){
  while(n%i==0){
    m[i]++;
    n/=i;
   }
 }

 if(n!=1) m[n]++;
 int square = 0;
 int tt = 0;
 int max_single = 0;
 int thua = 0;
 int dem=0;
 for(auto it:m){
  max_single = max(max_single, it.second);
  tt += it.second%3;
  square += it.second%2;
  thua++;
  dem+=it.second;
 }
 int k=0;
 for(auto it:m){
  if(max_single!=it.second) k+=it.second;
 }

 if(max_single>3){
  cout<<min({tt,square,max_single*thua-dem,k});
 }
 else cout<<min({tt,square});
    return 0;
}









// 2 2 2 2 2
// 5 5 5 5 5
// 3 3 3 3