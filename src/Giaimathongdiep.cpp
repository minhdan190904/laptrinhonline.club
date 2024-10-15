#include "iostream"
#include "iomanip"
#include "map"
#include "vector"
#include "algorithm"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

vector<string> res;

void backtrack(map<string, string> m, int pos, string ip, string temp){
 if(pos == ip.size()){
  res.push_back(temp);
  return;
 }
 for(auto x:m){
  if(x.first == ip.substr(pos, x.first.size())){
   backtrack(m, pos + x.first.size(), ip, temp + x.second + " ");
  }
 }
}

int main()
{
 string ip; cin >> ip;
    int n; cin >> n;
    int t = n;
    map<string, string> m;
    while(t--){
        string k,v; cin >> k >> v;
        m[k] = v;
    }
    
    backtrack(m, 0, ip, "");

    if(res.empty()) cout << "Toto bo tay";
    else{
     sort(res.begin(), res.end());
        for(auto x: res) cout << x << endl;
    }
    return 0;
}