#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int solve(vector<int>& a, vector<int>& b){
 int ss = 0;
 int res = 0;
 int n = a.size();
 int m = b.size();
 int i = 0, j = 0;
 int temp = 1e9+7;
 while(i<n and j<m){
  if(ss==0){
   while(i<n and a[i]>temp){
    i++;   
   }
   if(i==n) return res;
   temp = a[i];
   res+=a[i];
   ss=1;    
  }
  else {
   while(j<m and b[j]>temp){
    j++;   
   }
   if(j==m) return res;
   temp = b[j];
   res+=b[j];
   ss=0; 
  }
 }
   if(ss==0){
   while(i<n and a[i]>temp){
    i++;   
   }
   if(i==n) return res;
   temp = a[i];
   res+=a[i];
   if(i==n-1) return res;
   ss=1;    
  }
  else {
   while(j<m and b[j]>temp){
    j++;   
   }
   if(j==m) return res;
   temp = b[j];
   res+=b[j];
   if(j==m-1) return res;
   ss=0; 
  }
 return res;
}
main()
{
 int n,x; cin >> n;
 vector<int>a1,a2;
 while(n--){
  cin>>x;
  if(x%2==0) a1.push_back(x);
  else a2.push_back(x);
 }
 sort(a1.begin(), a1.end(), greater<int>());
 sort(a2.begin(), a2.end(), greater<int>());
 cout<<max(solve(a1, a2), solve(a2, a1));
    return 0;
}