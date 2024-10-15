#include "bits/stdc++.h"
using namespace std;

int main()
{
 int n; cin >> n;
 int a[n]; for(int &x:a) cin>>x;
 int ma[n];
 ma[n-1] = a[n-1];
 for(int i = n-1; i>=2; i--){
  ma[i-1] = max(ma[i], a[i-1]);
 }
 int res = 0;
 for(int i = 0; i < n - 1; i++){
  res+=a[i]<ma[i+1]?ma[i+1]-a[i]:0;
 }
 cout<<res;
    return 0;
}