#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll n,k; cin >> n >> k;
 ll a[k]; for(ll &x:a) cin >> x;
 ll re = 0;
 for(ll x:a) re += x;
 ll g = (k-1)*2;
 re-=g;
 if(n > re) cout << "NO";
 else cout << "YES";
    return 0;
}