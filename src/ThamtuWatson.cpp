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

bool check(pii a, pii b){
 return a.x>b.x;
}

kazuha_ve_di(){
 fastIO
 int n,x;
 while(true){
  cin>>n;
  if(n==0) return 0;
  vector<pii> a;
  for(int i = 0; i < n; i++){
   cin>>x;
   a.push_back({x,i});
  }
  sort(a.begin(), a.end(), check);
  cout<<a[1].y+1<<"\n";
 }
 return 0;
}