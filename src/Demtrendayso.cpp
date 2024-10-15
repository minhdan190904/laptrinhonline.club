#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,a,b) for(int i=a;i>=b;i--)
#define int long long
#define pii pair<int,int>
#define pb push_back
#define pf push_front
#define rd(x) fixed<<setprecision(x)
const int MOD=1e9+7;
using namespace std;
bool check(int n){
 int k = sqrt(n);
 return k*k==n;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin>>n;
 int a[n];
 int b[5] = {0};
 int c = 0;
 for(int i = 0; i < n; i++){
  cin >> a[i];
  if(a[i]%3!=0) b[0]++;
  if(check(a[i])) b[1]++;
  if(a[i]%2==0) c++;
 }
 int l = n-c;
 b[3] = c*(c-1)/2 + l*(l-1)/2;
 for(int i = 1; i < n; i++){
  if(a[i-1]!=0){
   if(a[i]%a[i-1]==0) b[2]++;
  }
 }
 for(int i = 2; i < n; i++){
  if(a[i-1]>a[i-2] and a[i] > a[i-1]) b[4]++;
 }
 for(int x:b) cout<<x<<endl;
    return 0;
}