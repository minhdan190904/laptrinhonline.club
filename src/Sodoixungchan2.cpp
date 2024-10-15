#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    int n; cin >> n;
    cout << n;
    string s = to_string(n);
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}