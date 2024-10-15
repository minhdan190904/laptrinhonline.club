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

string s;

void solve(){
 int p1 = s[0] - '0';
 int p2 = (s[2] - '0') * 10 + (s[3] - '0');
 int res = p1 * 60 + p2 - 7 * 60;
 if(res < 0) res = 0;
 cout << "Cham tre toi da: " << res << endl;
}

minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 while(getline(cin, s)){
  solve();
 }
    return 0;
}