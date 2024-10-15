#include "bits/stdc++.h"
#define int long long
#define endl "\n"
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int cdORcr(int p, int s){
 if(p%2!=0) return -1;
 p/=2;
 int res = (p+sqrt(p*p-4*s))/2;
 if(res<=0 or res >= p or res>s) return -1;
 return res;
}

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int t; cin>>t;
 while(t--){
  int s, p; cin>>p>>s;
  int res = cdORcr(p, s);
  if(res == -1) cout<<"khong ton tai hinh chu nhat"<<endl;
  else cout<<min(res, s/res)<<" "<<max(res,s/res)<<endl;
 }
}