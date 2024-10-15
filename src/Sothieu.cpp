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
 int n, m;
 cin>>n;
 map<int,int> m1;
 map<int,int> m2;
 int a[n]; for(int &x:a){
  cin>>x;
  m1[x]++;
 }
 cin>>m;
 set<int> s;
 int b[m]; for(int &x:b){
  cin>>x;
  m2[x]++;
  if(m2[x]>m1[x]) s.insert(x);
 }
 for(auto x:s) cout<<x<<" ";
    return 0;
}