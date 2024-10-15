#include "bits/stdc++.h"
 #define int long long
 #define db double
 #define rd(x) fixed<<setprecision(x)
 #define MOD 1000000007
 #define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 #define pii pair<int,int>
 #define x first
 #define y second
 
 using namespace std;
 
 signed main(){
  fastIO
  int n; cin>>n;
  int p[n],a[n];
  for(int i = 0; i < n; i++){
   cin>>a[i];
  }
  int temp;
  sort(a,a+n);
  for(int i = 0; i < n; i++){
   p[i]=a[i];
  }
  int m = p[0];
  for (int i = 1; i < n; i++)
  {
   for (int j = 0; j < i; j++)
   {
    if(__gcd(a[i],a[j])==1 and a[i]!=a[j]) p[i] = max(p[i],p[j]+a[i]);
   }
   m = max(m,p[i]);
  }
  cout << m;
  return 0;
 }