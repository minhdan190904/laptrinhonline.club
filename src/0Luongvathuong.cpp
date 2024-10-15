#include "bits/stdc++.h"
using namespace std;
int main(){
 string s; cin >> s;\
 double a, b; cin >> a >> b;
 cout << "TONG = R$ ";
 double res = b * 0.15 + a;
 cout << fixed << setprecision(2) << res;
 return 0;
}