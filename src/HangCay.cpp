#include "bits/stdc++.h"
using namespace std;

struct st{
 int val, f, s, m;
};

bool cmp(st a, st b){
 if(a.val < b.val) return true;
 else if(a.val > b.val) return false;
 return a.m < b.m;
}

int main()
{
 int n; cin >> n;
 int a[n]; for(int &x:a) cin>>x;
 st b[n];
 for(int i = 0; i < n; i++){
  b[i].val = a[i];
  b[i].f = i-1;
  b[i].s = i+1;
  b[i].m = i;
 }
 sort(b,b+n,cmp);
 int res = 0;
 map<int,int> v;
 v[-1] = 1;
 v[n] = 1;
 for(int i = 0; i < n; i++){
  if(v[b[i].m]==0){
   res++;
   v[b[i].m] = 1; v[b[i].f] = 1; v[b[i].s] = 1;
  }
 }
 cout<<res;
    return 0;
}