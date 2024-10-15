#include "bits/stdc++.h"
#define ll long long
#define kenshi main
using namespace std;
bool check(string a, string b)
{
 string h = a + b, k = b + a;
 return h > k;
}
kenshi()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL); cout.tie(NULL);
 int n; cin >> n;
 string s[n];
 for(string &x : s) cin >> x;
 sort(s, s + n, check);
 for (auto x : s) cout << x;
 return 0;
}