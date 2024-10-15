#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for (int i=a;i<=b;i++)
#define FOD(i,a,b) for (int i=a;i>=b;i--)
#define TIME "Time elapsed : "<<(double)clock()/1000<<" s"
#define int long long
#define pii pair<int,int>
const int mod=1e9+7;
using namespace std;
int cal(int a, int b, int mod) {
    int res = 1;
    a = a % mod;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return res%mod;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 if(n == 1) cout << "1";
 else if(n==2) cout << "2";
 else{
       cout << cal(2,n-2,mod);
 }
    return 0;
}