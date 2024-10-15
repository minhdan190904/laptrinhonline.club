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
 string s; cin>>s;
 unordered_map<char,char> m;
 int n;cin>>n;
 char c,a,b;
 for(char i='a';i<='z';i++){
  m[i]=i;
 }

 while(n--){
  cin>>c;
  if(c=='R'){
   cin>>a>>b;
   for(char i='a';i<='z';i++){
    if(m[i]==a) m[i]=b;
   }    
  }
  else{
   cin>>a;
   for(char i='a';i<='z';i++){
    if(m[i]==a) m[i]='$';
   }   
  }
 }
 for(char x:s) if(m[x]!='$') cout<<m[x];
    return 0;
}