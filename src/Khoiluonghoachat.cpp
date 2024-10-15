//khoi luong
#include<bits/stdc++.h>
using namespace std;
void sol()
{
 map<char,int> K={{'C',12},{'O',16},{'(',0},{'H',1}};
 string x;
 cin>>x;
 stack<int> S;
 for(auto c:x)
 if(K.find(c)!=K.end()) S.push(K[c]);
 else if(c==')')
 {
  int t=0; 
  while(S.top()!=0) t+=S.top(),S.pop();
  S.top()=t; 
 } 
 else S.top()*=c-'0';
 int t=0; 
 while(S.size()) t+=S.top(),S.pop();
 cout<<t<<"\n";
}
int main()
{
 int test;
 cin>>test;
 while(test--) sol();
}