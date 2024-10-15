#include "bits/stdc++.h"
#define db double
using namespace std;
int main(){
    int n; cin >> n;
    db l, r, tb = 0, m = 0;
    int k = n;
    while(n--){
     cin >> l >> r;
     db s = l * r;
     if(s > m) m = s;
     tb += s;
 }
 tb/=k;
 cout << fixed << setprecision(3) << tb << endl << m;
 return 0;
}