#include "bits/stdc++.h"
#define int long long
#define endl "\n"
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

bool check(int n){
 int x = sqrt(n);
 return n==x*x;
}

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int n; cin>>n;
 int res = 0;
 map<int,int> m;
 for(int i = 0; i * i <= n/2; i++){
  if(check(n-i*i)){
   m[n-i*i] = 1;
   m[i] = 1;
   res++;
  }
 }
 cout<<res;
}