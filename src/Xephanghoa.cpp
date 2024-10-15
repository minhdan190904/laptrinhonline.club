#include "bits/stdc++.h"
using namespace std;
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
const int MOD = 1e9+7;

int res = 0,temp,m,x,k;
vector<int> a, b;
string st;
map<string,int> mp;
void TRY(string s, int v){
 if(s.size() == k or v>m){
  temp=0;
  b.clear();
  for(int i = 0; i < s.size(); i++){
   if(s[i]=='1'){
    b.push_back(a[i]);
    temp+=a[i];
   }
  }
  if(temp<=m and temp>0){
   do{
    st="";
    for(int i = 0; i < b.size(); i++){
     st += to_string(b[i]);
    }
    mp[st]=1;
   }while(next_permutation(b.begin(), b.end()));
  }
  return;
 }
 TRY(s+"0",v);
 TRY(s+"1",v+a[s.size()+1]);
}

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int n;
 cin>>n>>m;
 for(int i = 0; i < n; i++){
  cin>>x;
  if(x<=m) a.push_back(x);
 }
 k = a.size();
 sort(a.begin(),a.end());
 TRY("", 0);
 cout<<mp.size();
 cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}