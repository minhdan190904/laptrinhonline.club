#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
struct oto{
 ll BKS;
 db tt;
 char ct; 
};
bool cmp(oto a, oto b){
 if(a.tt == b.tt){
  if(a.ct == a.ct){
   return a.BKS < b.BKS;
  }
 }
 return a.tt < b.tt;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n; cin >> n;
 oto a[n]; ll res = 0;
 for(int i = 0; i < n; i++){
  cin >> a[i].BKS >> a[i].tt >> a[i].ct;
  if(a[i].ct == 'B' and a[i].BKS%3==0)res++;
 }
 sort(a, a + n, cmp);
 cout << res << endl;
 for(int i = 0; i < 3; i++){
  cout << a[i].BKS << endl;
 }
    return 0;
}