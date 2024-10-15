#include "iostream"
#include "algorithm"
#define int long long
using namespace std;
main() {
 int n,w,t; cin>>n>>w>>t;
 int a[n],b[n];
 for(int i = 0; i < n; i++){
  cin>>a[i];
 }
 int res = 0;
 int temp = 0;
 for(int i = 0; i < t; i++){
  temp += a[i];
 }
 int tt = w;
 if(w>temp){
  res += w-temp;
  a[t-1] += w-temp;
 }
 else w = temp;
 for(int i = t; i < n; i++){
  temp = w + a[i]-a[i-t];
  if(tt>temp){
   w = tt;
   res += w-temp;
   a[i] +=w-temp;
  }
  else w = temp;
 }
 cout<<res;
    return 0;
}