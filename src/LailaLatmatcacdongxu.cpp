#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll t; cin >> t;
 while(t--){
  ll n; cin >> n;
  cout << n-(int)(sqrt(n)) << endl;
 }
    return 0;
}