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
 map<int, db> m;
 m[1] = 4.00;
 m[2] = 4.5;
 m[3] = 5;
 m[4] = 2;
 m[5] = 1.5;
 cout << "Tong: R$ ";
 cout << rd(2) << b*m[a];
 return 0;
}