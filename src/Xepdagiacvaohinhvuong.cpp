#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for (int i=a;i<=b;i++)
#define FOD(i,a,b) for (int i=a;i>=b;i--)
#define TIME "Time elapsed : "<<(double)clock()/1000<<" s"
#define int long long
#define pii pair<int,int>
const int MOD=1e9+7,INF=4e18;
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 if(n==2) cout << "1.00000";
 else{
 n *= 4;
 db goc = 2* M_PI / n;
 db canh = 1 / tan(goc);
 cout << fixed << setprecision(5) << canh;
}
    return 0;
}