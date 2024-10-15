#include "bits/stdc++.h"
using namespace std;
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define FOD(i,a,b) for(int i=a;i>=b;i--)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define MOD 4000000007
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define kazuha_ve_di main
#define pii pair<int,int>
#define x first 
#define y second

bool cmp(pii a, pii b){
 if(a.x==b.x){
  return a.y<b.y;
 }
 return a.x<b.x;
}

kazuha_ve_di(){
 int t,td,k; cin>>t;
 while(t--){
  vector<pii> a;
  int n; cin >> n;
  for(int i = 0; i < n; i++){
   cin>>td>>k;
   a.push_back({td-k+MOD,td+k+MOD});   
  }
  sort(a.begin(), a.end(), cmp);
  int res = a[0].y-a[0].x;;
  int r = a[0].y;
  for(int i = 1; i < n; i++){
   if(a[i].x < r and a[i].y > r){
    res += a[i].y - r;
    r = a[i].y;
   }
   else if(a[i].y > r){
    res += a[i].y - a[i].x;
    r = a[i].y; 
   }
  }
  cout<<res<<"\n";
 }
 return 0;
}