#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 int a[n]; for(int &x:a) cin >> x;
 int cnt=0;
 for(int i = 1; i < n-1; i++){
  if(a[i] > a[i-1] and a[i] > a[i+1]) cnt++;
 }
 cout <<cnt;
    return 0;
}