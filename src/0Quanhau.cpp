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

int c[200], d1[200], d2[200], res=0,n;

void SAYONARA_MATA_ITSUKA(int k){
 if(k-1==n){
  res++;
  return;
 } 
 for(int j = 1; j <= n; j++){
  if(c[j]==1 and d1[j-k+n] == 1 and d2[j+k-1]==1){
   c[j] = 0;
   d1[j-k+n] = 0;
   d2[j+k-1] = 0;
   SAYONARA_MATA_ITSUKA(k+1);
   c[j] = 1;
   d1[j-k+n] = 1;
   d2[j+k-1] = 1;
  }
 }
}

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 cin>>n;
 for(int i = 1; i <= 104; i++){
  c[i] = 1;
  d1[i] = 1;
  d2[i] = 1;
 }
 SAYONARA_MATA_ITSUKA(1);
 cout<<res;
 cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}