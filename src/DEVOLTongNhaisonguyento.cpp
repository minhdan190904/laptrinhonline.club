#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
bool check(int n){
 for(int i = 2; i * i <= n; i++){
  if(n%i==0)return false;
 }
 return n > 1;
}
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 vector<pair<int, int>> a;
 for(int i = 2; i <= n/2; i++){
  if(check(i)){
   if(check(n-i) and i*2!= n){
    a.push_back(make_pair(i, n-i));
   }
  }
 }
 cout << a.size() << endl;
 for(auto it:a) cout << it.first << " " << it.second << endl;
    return 0;
}