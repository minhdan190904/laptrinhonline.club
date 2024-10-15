#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int a[3];cin >> a[0] >> a[1] >> a[2];
 sort(a, a + 3);
 cout << abs(a[1]-a[0]) + a[2]-a[1]-1-1;
    return 0;
}