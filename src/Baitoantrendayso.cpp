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

int a[102],n;
string st;
bool check;
int res;

bool pp(string s, string t){
 int a[10]={};
 for(auto x:t) a[x-'0']++;
 for(auto x:s) if(a[x-'0']!=0) return false;
 return true;
}

void TRY(int k, int temp, string tt){
 st=to_string(a[k]);
 check = pp(tt,st);
 res=max(res,temp);
 if(check and k<n){
  TRY(k+1,temp+a[k],tt+st);
 }
 if(k<n){
  TRY(k+1,temp,tt);
 }
}

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int t; cin>>t;
 while(t--){
  res=0;
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  TRY(0,0,""); cout<<res<<"\n";
 }
    return 0;
}