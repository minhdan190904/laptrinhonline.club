#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 map<int, int> m;
 for(int i = 0 ; i < 9; i++){
  int x; cin >> x;
  m[x]++;
 }
 int i = 0;
 bool check = true;
 for(auto it:m){
  i++;
  if(it.first != i){
   check = false;
   break;
  }
 }
 if(check) cout << "VALID";
 else cout << "INVALID";
    return 0;
}