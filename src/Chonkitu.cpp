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
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 vector<string> s(n);
 for(int i = 0; i < n; i++){
  cin >> s[i];
 }
 int k = s[0].size();
 int h = 0;
 char a[k]; for(char &x:a) x = 'z';
 for(int i = 0; i < k; i++){
  for(int j = h; j < n; j++){
   if(s[j][i] < a[i]){
    a[i] = s[j][i];
    h = j;
  }
 }
}
 for(int i = 0; i < k; i++){
  cout << a[i];
 }
    return 0;
}