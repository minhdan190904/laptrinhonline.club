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
bool check(int n){
 int k = sqrt(n);
 return k*k==n;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 string s;
 while(cin>>s){
  int res1 = 0;
  int res2 = 0;
  int temp1 = 1;
  int temp2 = 9;
  for(char x:s){
   if(x == '-') break;
   if(x != '.'){
    res1 += (x-'0')*temp1;
    temp1++;
    res2 += (x-'0')*temp2;
    temp2--;
   }
  }
  int c1 = res1%11;
  c1%=10;
  int c2 = res2%11;
  c2%=10;
  if(c1 == s[12]-'0' and c2 == s[13]-'0') cout<<"Hop le" << endl;
  else cout<<"Khong hop le" << endl;
 }
    return 0;
}