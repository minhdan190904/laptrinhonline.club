#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 char c; cin >> c;
 db a[13][13];
 for(int i = 1; i <= 12; i++){
  for(int j = 1; j <= 12; j++){
   cin >> a[i][j];
  }
 }
 db tong = 0; int t=5;
 int k = 12;
 int h = 2;
 while(t--){
  for(int i = h; i <= 12 - h + 1; i++){
   tong += a[k][i];
  }
  k--;
  h++;
 }
 if(c == 'M') tong /= 30;
 cout << fixed << setprecision(1) << tong;
    return 0;
}