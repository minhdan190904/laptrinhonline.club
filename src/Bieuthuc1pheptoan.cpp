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
 int t; cin >> t;
 while(t--){
  string s;
  int in = 0;
  cin >> s;
  for(int i = 1; i < s.size(); i++){
   in = i;
   if(s[i] < '0' or s[i] > '9'){
    break;
   }
  }
  int k1 = stoll(s.substr(0, in));
  int k2 = stoll(s.substr(in+1));
  if(s[in] == '+'){
   cout<<k1+k2;
  }
  else if(s[in] == '-'){
   cout<<k1-k2;
  }
  else if(s[in] == '*'){
   cout << k1*k2;
  }
  
  else if(s[in] == '%'){
   if(k2==0) cout<<"khong tinh duoc";
   else cout << k1%k2;
  }
  else{
   if(k2==0) cout<<"khong tinh duoc";
   else{
    int res = k1/k2;
    cout<<res;
   }
  }
  cout<<endl;
 }
    return 0;
}