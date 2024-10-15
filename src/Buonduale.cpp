#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define fi first
#define se second
#define int long long

int n, m, k;
int x[100005];
int ans = 0;
int left = 0;
deque<pii> q;

void sol(int i){
 while(q.size() && q.front().fi < i-m+1){
  q.pop_front();
 }
 int w = k;
 while(q.size() && w > 0){
  if(w < q.front().se){
   ans += w;
   int tmp = q.front().se;
   int day = q.front().fi;
   q.pop_front();
   q.push_front({day,tmp-w});
   w = 0;
  }
  else{
   w -= q.front().se;
   ans += q.front().se;
   q.pop_front();
  }
 }
}

main(){
 cin >> n >> m >> k;
 for(int i=1; i<=n; i++){
  cin >> x[i];
  q.push_back({i,x[i]});
  sol(i);
 }
 for(int i=n+1; i<=n+m-1; i++){
  sol(i);
 }
 cout << ans;
 return 0;
}