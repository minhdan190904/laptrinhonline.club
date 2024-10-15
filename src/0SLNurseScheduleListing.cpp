#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int n,m,k;
string sk, sm;
void Try(string temp){
 if(temp.size()==n){
  if(temp.substr(n-m) == sm or temp[n-1]=='0') cout<<temp<<endl;
  return;
 }
 if(!(temp.size()>0)) Try(temp + "0");
 else if(temp.size()>=m and temp.substr(temp.size()-m) == sm) Try(temp + "0");
 if(!(temp.size()>=k and temp.substr(temp.size()-k) == sk)) Try(temp + "1");
}

main()
{
 cin>>n>>m>>k;
 sm = "";
    sk = "";
 for(int i = 1; i <= k; i++){
  sk += "1";
 }
 for(int i = 1; i <= m; i++){
  sm += "1";
 } 
 Try("");
    return 0;
}