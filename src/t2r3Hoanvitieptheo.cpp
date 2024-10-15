#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 string s; cin >> s;
 while(next_permutation(s.begin(), s.end())){
  cout << s;
  return 0;
 }
 cout << "KHONG CO HOAN VI TIEP THEO";
    return 0;
}