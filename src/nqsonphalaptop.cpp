#include "bits/stdc++.h"
#define int long long
#define rd(x) fixed<<setprecision(x)
#define pss pair<string, string>

using namespace std;


signed main(){
 int n,x,y1,y2,z;cin>>n>>x>>y1>>y2>>z;
 cout<<min({n*y1+y2,z,n*x});
 return 0;
}