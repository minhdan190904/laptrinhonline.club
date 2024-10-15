#include "iostream"
#include "iomanip"
#include "set"
#include "bits/stdc++.h"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

set<string> ct;

void solve(string x){
 if(x=="") return;
 if(ct.find(x)==ct.end()){
  ct.insert(x);
  solve(x.substr(0, x.size()-1));
  solve(x.substr(1, x.size()-1));
 }
}

int main()
{
 string s; cin>>s;
 solve(s);
 for(string x:ct) cout<<x<<endl; 
    return 0;
}