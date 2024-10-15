#include "iostream"
#include "algorithm"
#define int long long
using namespace std;
main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for (auto& x : a) {
        cin >> x;
    }
    for (auto& x : b) {
        cin >> x;
    }
 sort(a, a + n, greater<int>());
 sort(b, b + m, greater<int>());
 int cnt=0, j;
 int i = j = 0;
 while(i<n and j<m){
  if(a[i]>b[j]){
   cnt++;
   i++; j++;
  }
  else j++;
 }
 cout<<cnt;
    return 0;
}