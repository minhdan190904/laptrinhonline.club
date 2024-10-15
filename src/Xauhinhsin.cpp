#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

string s = "";
int res = 0;
void creat_string(string a, int n){
 for(int i = 0; i < n; i++){
  s += a;
 }
}

void count(string s){
 int cnt = 0;
  for(int i = 1; i < s.size()-1; i++){
  if(s[i]>s[i-1] and s[i]>s[i+1]) cnt++;
 }
 res = max(res,cnt);
}

main()
{
 int n,m,k;cin>>n>>m>>k;
 creat_string("a", n);
 creat_string("b", m);
 creat_string("c", k);
 do{
  count(s);
 }while(next_permutation(s.begin(), s.end()));
 cout<<res;
    return 0;
}