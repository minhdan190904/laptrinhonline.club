#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
const int max_n = 1e6;
bool check(int n){
 for(int i = 2; i*i<= n; i++){
  if(n%i==0) return false;
 }
 return n > 1;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 vector<int> a;
 vector<int> b(1e6+1,0);
 for(int i = 0; i <= max_n; i++){
  if(check(i)) b[i] = 1;
  a.push_back(i);
 }
 int n; cin >> n;
 while(n--){
  int c,d; cin >> c >> d;
  for(int i = c; i <= d; i++){
   if(b[i] == 1) cout << a[i] << " ";
  }
  cout << endl;
 }
    return 0;
}