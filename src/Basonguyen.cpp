#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;

bool check1(long long a[]) {
    return (a[4] == a[1] + a[2]) and (a[5] == a[1] + a[3]) and (a[6] == a[2] + a[3])
           and (a[7] == a[1] + a[2] + a[3]);
}
bool check2(long long a[]){
 return (a[1] + a[2] == a[3]) and (a[1] + a[4] == a[5]) and (a[2] + a[4] == a[6]) and (a[7] == a[1] + a[2] + a[4]);
}
minhdan() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a[8];
    for (int i = 1; i <= 7; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 8);
    if(check1(a)){
        cout << a[1] << " " << a[2] << " " << a[3];
    }
    else if(check2(a)){
     cout << a[1] << " " << a[2] << " " << a[4];
 }
 else{
  cout << "-1";
 }
    return 0;
}