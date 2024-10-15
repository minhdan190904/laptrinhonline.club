#include "bits/stdc++.h"
using namespace std;
int main()
{
 int n, k;
 cin >> n >> k;
 int a[n];
 for (int &x : a) cin >> x;
 multiset<int> b;
 for (int i = 0; i < k; i++)
 {
  b.insert(a[i]);
 }
 for (int i = k; i < n; i++)
 {
  cout << *b.rbegin() << " ";
  b.erase(b.find(a[i-k]));
  b.insert(a[i]);
 }
 cout << *b.rbegin();
 return 0;
}