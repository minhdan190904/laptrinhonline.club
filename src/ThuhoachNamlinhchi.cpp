#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

main()
{
 int n,k;cin>>n>>k;
 vector<int> a;
 vector<int> b;
 int x, t = n;
 while(t--){
  cin>>x;
  if(x>0) a.push_back(x);
  else b.push_back(x*-1);
 }
 int res = 1e15;
 sort(a.begin(), a.end());
 sort(b.begin(), b.end());
 int a_s = a.size();
 int b_s = b.size();
 if(k<=a_s) res = min(res, a[k-1]);
 if(k<=b_s) res = min(res, b[k-1]);
 for(int i = 1; i <= k; i++){
  int j = k-i;
  if(i<=a_s and j<=b_s and j>0){
   res = min(res, 2*a[i-1] + b[j-1]);
   res = min(res, a[i-1] + b[j-1]*2);
  }
  if(i<=b_s and j<=a_s and j>0){
   res = min(res, 2*b[i-1] + a[j-1]);
   res = min(res, b[i-1] + a[j-1]*2);   
  }
 }
 cout<<res;
    return 0;
}