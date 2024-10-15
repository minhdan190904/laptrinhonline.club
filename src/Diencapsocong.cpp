#include <bits/stdc++.h>
#define ll long long
#define minhdan main
using namespace std;

minhdan() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, x, t1, t2, v1, v2, d;
    map<ll, ll> m;
    ll i = 0;
    vector<ll> a;
    while (cin >> x) {
        i++;
        if (x != 0) {
            m[i] = x;
        }
        a.push_back(x);
    }
    ll k = m.size();
    n = a.size();
    if(k > 1){
     auto it = m.begin();
     t1 = it->first;
     v1 = it->second;
     it++;
     t2 = it->first;
     v2 = it->second;
     d = (v2-v1)/(t2-t1);
     int r = v1 - d * (t1-1);
     while(n--){
      cout << r << " ";
      r += d;
  }
 }
 else if(k == 0){
  while(n--){
   cout << "0 ";
  }
 }
// else{
//  
// }
    return 0;
}