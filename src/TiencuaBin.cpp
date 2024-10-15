#include "bits/stdc++.h"
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int check(int x, int y, int z){
 if(x%1!=0 or y%1!= 0 or z%1!=0) return 0;
 return 1;
}
main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int n; cin>>n;
 db x,y,z;
 z = n/8;
 x = 5*z;
 y = 2*z;
 if(check(x,y,z) and n%8==0) cout<<rd(0)<<x<<" "<<y<<" "<<z;
 else cout<<-1;
    return 0;
}