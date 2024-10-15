#include "bits/stdc++.h"
using namespace std;
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
const int MOD = 1e9+7;

int n,h,m,sum;

void solve(){
 cin>>n>>h>>m;
 sum=0;
 int a[n]; for(int &x:a){cin>>x;sum+=x;}
 sort(a,a+n,greater<int>());
 for(int x:a) if(sum-x<=x) sum-=x;
 cout<<sum*h*m<<"\n"; 
}

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int t;cin>>t;
 while(t--){
  solve();
 }
 cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}