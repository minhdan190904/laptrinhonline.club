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
bool ch(int a, int b, int c){
 return (a + b) > c;
}
bool check(int a, int b, int c){
 return a*a==b*b+c*c;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int a,b,c; cin>>a>>b>>c;
 if(ch(a,b,c)&&ch(b,c,a)&&ch(c,a,b)){
  if(a==b or b==c or a==c) cout<<"TAM GIAC CAN";
  else if(check(a,b,c) or check(c,b,a) or check(c,a,b))
  cout <<"TAM GIAC VUONG";
  else cout<<"TAM GIAC THUONG";
 }
 else cout<<"KHONG PHAI TAM GIAC";
    return 0;
}