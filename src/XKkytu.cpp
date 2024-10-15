#include "bits/stdc++.h"
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int t; cin >> t;
 while(t--){
  int n; string s, res = "";
  cin >> n >> s; 
  for(char x:s){
   for(int i = 0; i < n; i++){
    cout << x;
   }
  }
  cout << endl;
 }
    return 0;
}