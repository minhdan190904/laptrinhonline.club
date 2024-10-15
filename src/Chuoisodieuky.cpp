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
 int x,y;
 string s; cin>>s>>x>>y;
 int n=s.size();
 int a[n+2] = {}, b[n+2] = {};
 for(int i=1;i<=n;i++){
  a[i]=(a[i-1]*10+s[i-1]-'0')%x;
 }
 int poww=1;
 for(int i=n;i>=1;i--){
  b[i]=(b[i+1]+(s[i-1]-'0')*poww)%y;
  poww=(poww*10)%y;
 }

 for(int i=2;i<n;i++){
  if(a[i-1]==0 and b[i]==0 and s[i]!='0'){
   cout<<"YES"<<"\n";
   cout<<s.substr(0,i)<<"\n";
   cout<<s.substr(i);
   return 0;
  }
 }
 cout<<"NO";
    return 0;
}