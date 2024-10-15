#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ll n; cin >> n;
    ll a[n], dem = 0;
    for(int i = 0; i < n; i++)
    {
     cin >> a[i];
     if(a[i] == i) dem++;
 }
 cout << dem;
    return 0;
}