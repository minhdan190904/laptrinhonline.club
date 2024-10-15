#include "bits/stdc++.h"
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template <typename T>
//using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define db double
#define endl "\n"
#define pii pair<double,double>
#define x first
#define y second
#define rd(x) fixed<<setprecision(x)
const int MOD = 1e9+7;

pii a[3];
char kieu;
double d;

char findChar(){
 vector<int> t1,t2,t3;
 if(kieu == 'x'){
  for(int i=0; i<3; i++){
   if(a[i].x>=d) t1.push_back(i);
   if(a[i].x<=d) t2.push_back(i);
   if(a[i].x==d) t3.push_back(i);
  }
  if(t3.size()>=1){
   if(t3.size()==1) return t3[0]+'A';
   int min_v = min(t3[0],t3[1]);
   return min_v+'A';
  }
  if(t1.size()*t2.size()!=0){
   if(t1.size()==t2.size()){
    int min_v = 3;
    for(int x:t1) min_v=min(min_v,x);
    for(int x:t2) min_v=min(min_v,x);
    return min_v+'A';
   }
   if(t1.size()>t2.size()) return t2[0]+'A';
   return t1[0]+'A';
  }
 }
 
 else{
  
  for(int i=0; i<3; i++){
   if(a[i].y>=d) t1.push_back(i);
   if(a[i].y<=d) t2.push_back(i);
   if(a[i].y==d) t3.push_back(i);
  }
  if(t3.size()>=1){
   if(t3.size()==1) return t3[0]+'A';
   int min_v = min(t3[0],t3[1]);
   return min_v+'A';
  }
  if(t1.size()*t2.size()!=0){
   if(t1.size()==t2.size()){
    int min_v = 3;
    for(int x:t1) min_v=min(min_v,x);
    for(int x:t2) min_v=min(min_v,x);
    return min_v+'A';
   }
   if(t1.size()>t2.size()) return t2[0]+'A';
   return t1[0]+'A';
  }
  
 }
 return '0';
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int t; cin>>t;
 while(t--){
  for(auto &k:a) cin>>k.x>>k.y;
  cin>>kieu>>d;
  cout<< findChar()<<endl;
 }
 cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}