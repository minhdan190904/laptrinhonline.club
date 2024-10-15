#include "bits/stdc++.h"
#define ll long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int n; cin>>n;
 int a[n]; for(int &x:a) cin>>x;
 int m; cin>>m;
 int b[m]; for(int &x:b) cin>>x;
 int i = 0, j = 0;
 while(i<n and j<m){
  if(a[i]<b[j]){
   cout<<a[i++]<<" ";
  }
  else{
   cout<<b[j++]<<" ";
  }
 }
 while(i<n){
  cout<<a[i++]<<" ";
 }
 while(j<m){
  cout<<b[j++]<<" ";
 }
    return 0;
}