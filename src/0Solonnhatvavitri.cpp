#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll a[100], max = -1, I = -1;
 for(int i = 0; i < 100; i++){
  int x;
  cin >> x;
  if(x > max){
   max = x;
   I = i +1;
  }
 }
 cout << max << endl << I;
    return 0;
}