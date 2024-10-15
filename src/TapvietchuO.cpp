#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n = 10;
 while(n--){
  char c; cin >> c;
  if(c == '0') cout << "khong" << endl;
  else if(c=='o') cout << "thuong" << endl;
  else cout << "hoa" << endl;
 }
    return 0;
}