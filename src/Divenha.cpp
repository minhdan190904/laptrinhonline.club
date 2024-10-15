#include "iostream"
#include "algorithm"
#include "vector"
#include "queue"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
using namespace std;
main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 string s;
 int n,d,h,k;cin>>n>>d>>s;
 queue<int> q;
 q.push(0);
 int cnt=0;
 while(q.size()){
   k = q.size();
  h = q.front();
  q.pop();
  if(h==n-1){
   cout<<cnt; return 0;
  }
  for(int i = d; i >= 1; i--){
   if(h+i<n){
    if (s[h+i]=='1'){
     q.push(h+i);
     goto ve;
    }
   }
  }
  ve:cnt++;
 }
 cout<<-1;
}