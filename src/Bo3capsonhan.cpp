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
 unordered_map<int,int> m1;
 unordered_map<int,int> m2;
 int n,r; cin>>n>>r;
 int res=0;
 int x;
 if(r==1){
  while(n--){ 
   cin>>x;
   m1[x]++;
  }
  for(auto x:m1){
   res+=x.second*(x.second-1)*(x.second-2)/6;
  }
  cout<<res; return 0;
 }
 while(n--){
  cin>>x;
  if(x%r==0){
   res+=m2[x/r];
   m2[x]+=m1[x/r];
  }
  m1[x]++;
 }
 cout<<res;
 cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}