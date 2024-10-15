#include "bits/stdc++.h"
using namespace std;
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define MOD 1000000007
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define kazuha_ve_di main
#define pii pair<int,int>
#define x first
#define y second
void setup(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fastIO
}

vector<int> p;

void make_set(int n){
 for(int i = 1; i <= n; i++){
  p[i] = i;
 }
}

int find(int v){
 if(p[v] == v) return v;
 return p[v] = find(p[v]);
}

void Union(int u, int v){
 int a = find(u);
 int b = find(v);
 if(a!=b) p[a] = b;
}

bool check_lt(int u, int v){
 return find(u)==find(v);
}

class poi{
 public:
  int u,v,vl;
  friend istream& operator>>(istream& cin, poi& p){
   cin>>p.u>>p.v>>p.vl;
   return cin;
  }
};

bool cmp(poi a, poi b){
 return a.vl < b.vl;
}

kazuha_ve_di(){
 fastIO
 int n,m,u,v,lc; cin>>n>>m;
 p.resize(n+1);
 make_set(n);
 int res = 0;
 poi a[m];
 for(auto &x:a) cin>>x;
 sort(a, a + m, cmp);
 for(int i = 0; i < m; i++){
  if(!check_lt(a[i].u, a[i].v)){
   Union(a[i].u, a[i].v);
   res += a[i].vl;   
  }
 }
 cout<<res; 
 return 0;
}