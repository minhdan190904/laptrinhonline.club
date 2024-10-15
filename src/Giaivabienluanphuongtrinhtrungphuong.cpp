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
 db a,b,c; cin >> a >> b >> c;
 set<db> s;
 if(a == 0 and b == 0 and c == b){
  cout << "vo so nghiem";
  return 0;
 }
 else if(a == 0 and b*c > 0){
  cout << "vo nghiem";
  return 0;
 }
 else if(a == 0 and b*c < 0){
  s.insert(sqrt(-c/b));
  s.insert(-1*sqrt(-c/b));
 }
 else if(a == 0 and b*c == 0){
  cout << "vo nghiem";
  return 0;
 }
 else{
 db del = b*b- 4*a*c;
 if(del < 0){
  cout << "vo nghiem";
  return 0;
 }
 else if(del == 0){
  db x = -b/(2*a);
  if(x < 0){
   cout << "vo nghiem";
   return 0;
  }
  s.insert(sqrt(x));
  s.insert(-1*sqrt(x));  
 }
 else{
 db x1 = ((-b + sqrt(del))/(2*a));
 db x2 = ((-b - sqrt(del))/(2*a));
 if(x1 >= 0){
  s.insert(sqrt(x1));
  s.insert(-1*sqrt(x1));  
 }
 if(x2 >= 0){
  s.insert(sqrt(x2));
  s.insert(-1*sqrt(x2));  
 }
}
}
 if(s.size() == 0) cout << "vo nghiem";
 else{
  for(db it:s){
   cout << rd(3) << it << endl;
  }
 }
    return 0;
}