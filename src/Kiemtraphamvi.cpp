#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

class kc{
 public:
  int x,y,c,dc,cs;
};

bool cmp(kc a, kc b){
 if(a.x == b.x) return a.y > b.y;
 return a.x < b.x;
}

bool cmp1(kc a, kc b){
 return a.cs < b.cs;
}

main()
{
 int n; cin >> n;
 map<kc, int> m1, m2;
 kc a[n];
 for(int i = 0; i < n; i++){
  cin >> a[i].x >> a[i].y;
  a[i].cs = i;
  a[i].dc = 0;
  a[i].c = 0;
 }
 sort(a, a + n, cmp);
 int Max = a[0].y;
 int Min = a[n-1].y;
 if(n==1){
  cout<<0<<endl<<0;
  return 0;
 }
 else{
  if(a[0].x == a[1].x and a[0].y == a[1].y) a[0].dc = 1;
  if(a[n-1].x == a[n-2].x and a[n-2].y == a[n-1].y) a[n-1].c = 1;
 }
 for(int i = 1; i < n; i++){
  if(a[i].y <= Max) a[i].dc = 1;
  else Max = a[i].y;
 }
 for(int i = n - 2; i >= 0; i--){
  if(a[i].y >= Min) a[i].c = 1;
  else Min = a[i].y;  
 }
 sort(a, a + n, cmp1);
 for(int i = 0; i < n; i++){
  cout << a[i].c << " ";
 }
 cout<<endl;
 for(int i = 0; i < n; i++){
  cout << a[i].dc << " ";
 }
    return 0;
}