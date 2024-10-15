#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

main()
{
 int n; cin>>n;
 int ma=1e9;
 int mb=1e9;
 int a[n], b[n];
 for(int &x:a){
  cin>>x;
  ma=min(ma,x);
 }
 for(int &x:b){
  cin>>x;
  mb=min(mb,x);
 }
 int res=0;
 int dua, dub;
 for(int i = 0; i < n; i++){
  dua = a[i]-ma;
  dub = b[i]-mb;
  int mi = min(dua,dub);
  int maa = max(dua,dub);
  res+=mi+maa-mi;
 }
 cout<<res;
    return 0;
}