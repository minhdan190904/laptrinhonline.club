#include "bits/stdc++.h"
#define int long long
using namespace std;

vector<int> a(4);
vector<char> c(3);
int res = 1e18;

int d(int a, int b, char c){
 if(c == '+') return a + b;
 return a * b;
}

int mi;

void solve(vector<int> a, vector<char> c){
 if(a.size()==1){
  res = min(res, a[0]);
  return;
 }
 sort(a.begin(),a.end());
 do{
  int temp = d(a[0], a[1], c[0]);
  vector<int> b(a);
  vector<char> k(c);
  b.erase(b.begin());
  b.erase(b.begin());
  b.insert(b.begin(), temp);
  k.erase(k.begin());
  solve(b, k);
 }while(next_permutation(a.begin(), a.end()));
}

main() {
 for(int &x:a) cin>>x;
 for(char &x:c) cin>>x;
 do{
  solve(a,c);
 }while(next_permutation(c.begin(), c.end()));
 cout<<res;
    return 0;
}