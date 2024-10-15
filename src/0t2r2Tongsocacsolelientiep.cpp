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
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int a, b; cin >> a >> b;
 int k1 = min(a,b);
 int k2 = max(a,b);
 if(k1 % 2 == 0) k1++;
 else k1 += 2;
 if(k2 % 2 == 0) k2--;
 else k2 -= 2;
 int t = (k2-k1)/2;
 t++;
 int res = t * (k1 + k2)/2;
 cout<<res;
    return 0;
}