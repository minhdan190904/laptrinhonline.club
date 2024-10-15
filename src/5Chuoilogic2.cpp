#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
 int x, y; cin >> x >> y;
 for(int i = 1; i <= y; i++)
 {
  cout << i;
  if(i % x == 0) cout << endl;
  else cout << " ";
 }
    return 0;
}