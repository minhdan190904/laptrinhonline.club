#include "bits/stdc++.h"
#define int long long
#define rd(x) fixed<<setprecision(x)
#define pss pair<string, string>

using namespace std;


signed main(){
 string s;
 fflush(stdin);
 getline(cin, s);
 map<char,int> m;
 for(int i = 0; i < s.size(); i++){
  if(s[i]!=' ') m[s[i]]=1;
 }
 if(m.size()==26) cout<<"true";
 else cout<<"false";

 return 0;
}