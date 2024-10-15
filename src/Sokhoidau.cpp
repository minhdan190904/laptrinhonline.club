#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for (int i=a;i<=b;i++)
#define FOD(i,a,b) for (int i=a;i>=b;i--)
#define TIME "Time elapsed : "<<(double)clock()/1000<<" s"
#define int long long
#define pii pair<int,int>
const int MOD=1e9+7;
using namespace std;
struct check {
    bool operator() (const string& a, const string& b) const {
 int h = a.size(), k = b.size();
     if (k != h){
        return h < k;
    }
    return a < b;
    }
};
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 string st;
 set<string, check> a;
 for(int i = 0; i < n; i++){
  st = "";
  string s; cin >> s;
  for(int j = 0; j < s.size(); j++){
   st += s[j];
   a.insert(st);
  }
 }
 vector<string> res(a.begin(), a.end());
 int k = 1;
 for(auto x: res){
  int h = stoll(x);
  if(h != k){
   cout << k;
   return 0;
  }
  k++;
 }
 return 0;
}