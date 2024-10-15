#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
bool check(string s)
{
 int n = s.size();
 if(n % 2 != 0) return false;
 int k = n/2;
 string s1 = s.substr(0, k);
 if(s == s1 + s1) return true;
 return false;
}
minhdan()
{
 int t; cin >> t;
 while(t--)
 {
  string s; cin >> s;
  if(check(s)) cout << "YES\n";
  else cout << "NO\n";
 }
    return 0;
}