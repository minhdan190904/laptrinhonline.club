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

void change(int& t){
 if(t>10 and t<=20) t-=10;
 else if(t>20) t-=20;
}

using namespace std;

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int n; cin>>n;
 int cnt1=0, cnt2=0;
 char a[6];
 int t1,t2;
 while(n--){
  t1=t2=0;
  for(char& x:a) cin>>x;
  for(int i=0;i<3;i++){
   if(a[i]=='A') t1+=1;
   else t1+=a[i]-'0';
  }
  for(int i=3;i<6;i++){
   if(a[i]=='A') t2+=1;
   else t2+=a[i]-'0';
  }
  change(t1); change(t2);
  if(t1>t2) cnt1++;
  else if(t2>t1) cnt2++;
 }
 cout<<cnt1<<" "<<cnt2;
    return 0;
}