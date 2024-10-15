#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for (int i=a;i<=b;i++)
#define FOD(i,a,b) for (int i=a;i>=b;i--)
#define TIME "Time elapsed : "<<(double)clock()/1000<<" s"
#define int long long
#define pii pair<int,int>
const int MOD=1e9+7;
using namespace std;
bool check(int n){
 for(int i = 2; i * i <= n; i++){
  if(n%i==0) return false;
 }
 return n > 1;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 for(int i = 2; i <= n; i++){
  if(check(i)) cout << i << " ";
 }
    return 0;
}