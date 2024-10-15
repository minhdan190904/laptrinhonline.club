#include "bits/stdc++.h"
using namespace std;
int main()
{
 int n, s, t; cin >> n >> s >> t;
 int r1 = n - s + 1;
 int r2 = n - t + 1;
 cout << max(r1, r2);
    return 0;
}