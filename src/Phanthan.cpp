#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n; cin >> n;
 ll k = log2(n); 
 if (pow(2,k) == n) cout << k;
 else cout << k +1;
    return 0;
}