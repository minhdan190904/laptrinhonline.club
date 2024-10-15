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

bool cmp(pii a, pii b){
 return a.x>b.x;
}

kazuha_ve_di(){
 int n; cin>>n;
 priority_queue<int> q;
 pii a[n];
 for(int i = 0; i < n; i++){
  cin>>a[i].x>>a[i].y;
 }
 sort(a, a + n, cmp);
 int temp = a[0].x;
 q.push(a[0].y);
 int res = 0;
 int ds;
 for(int i = 1; i < n; i++){
  if(a[i].x!=temp){
   ds = temp-a[i].x;
   while(ds>0 and q.size()>0){
    res += q.top();
    q.pop();
    ds--;
   }
   temp = a[i].x;
  }
  q.push(a[i].y);
 }
 
 ds = temp;
 
 while(ds>0 and q.size()>0){
  res += q.top();
  q.pop();
  ds--;
 }
 cout<<res;
 return 0;
}