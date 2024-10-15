#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
struct point{
 db x,y;
};

db kc(point a, point b){
 return pow(a.x-b.x,2) + pow(a.y-b.y,2);
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 point a[n];
 for(int i = 0; i < n; i++){
  cin >> a[i].x >> a[i].y;
 }
 vector<db> res;
 db m;
 for(int i = 0; i < n; i++){
  m = 0;
  for(int j = 0; j < n; j++){
   db temp = kc(a[i],a[j]);
   if(m < temp) m = temp; 
   }
   res.push_back(m);
 }
 sort(res.begin(),res.end());
 cout << fixed << setprecision(3) << res[0] * M_PI;
    return 0;
}