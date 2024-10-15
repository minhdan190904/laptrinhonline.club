#include "bits/stdc++.h"
#define int long long
#define rd(x) fixed<<setprecision(x)
#define pss pair<string, string>

using namespace std;


signed main(){
 int n,k,p1a,p2a,p1b,p2b; cin >> n;
 int x;
 deque<int> q1;
 deque<int> q2;
 for(int i = 0; i < n; i++){
  cin>>x;
  q1.push_front(x);
 }
 int cnt=0;
 while(q1.size()){
  p1a = q1.back();
  p1b = q1.front();
  if(q2.size()!=0){
   p2a = q2.back();
   p2b = q2.front();   
  }
  if(q2.size()==0){
   q2.push_front(p1a);
   q1.pop_back();
  }
  else if(p1a>p1b and p2a>p1b){
   k = min(p1a,p2a);
   if(p1a==k) q1.pop_back();
   else q2.pop_back();
   q1.push_front(k);
  }
  else if(p1a>p1b and p1a>p2b){
   k = max(p1b,p2b);
   if(p1b==k) q1.push_front(p1a);
   else q2.push_front(p1a);
   q1.pop_back();   
  }
  
  else if(p1a>p1b or p2a>p1b){
   k = max(p1a,p2a);
   if(p1a==k) q1.pop_back();
   else q2.pop_back();
   q1.push_front(k);
    
  }
  
  else if(p1a>p1b or p1a>p2b){
  
   k = min(p1b,p2b);
   if(p1b==k) q1.push_front(p1a);
   else q2.push_front(p1a);
   q1.pop_back();    
  }
  else{
   k = min(p1a,p2a);
   if(p1a==k) q1.pop_back();
   else q2.pop_back();
   q1.push_front(k);  
  }
  cnt++;
 }
 cout<<cnt;
 return 0;
}