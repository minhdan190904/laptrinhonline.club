#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 long n, xich;
 cin >> n;
 priority_queue<long, vector<long>, greater <long> > q;
 while (n--){
  cin >> xich;
  q.push(xich);
 }
 long sz = q.size();
 long cnt = 0;
 while (sz>1){
  cnt ++;
  long x = q.top();
  if (x==1){
   q.pop();
   sz--;
  }else{ 
   q.pop();
   q.push(x-1);
  }
  sz--;
 }
 cout << cnt;
 return 0;
}