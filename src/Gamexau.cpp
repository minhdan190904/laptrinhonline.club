#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    int t; cin >> t;
    while(t--)
    {
     string s; cin >> s;
     map<char, int> m;
     for(char x : s) m[x]++;
     int dem = 0;
     for(auto it : m)
     {
      if(it.second % 2 != 0) dem++;
  }
  if(dem % 2 == 0 and dem != 0) cout << "Toto" << endl;
  else cout << "Titi" << endl;
 }
    return 0;
}