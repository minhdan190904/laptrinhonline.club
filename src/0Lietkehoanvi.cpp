#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

main()
{
 int n; cin >> n;
 vector<int> a;
 for(int i = 1; i <= n; i++){
  a.push_back(i);
 }
 do{
  for(int x:a) cout<<x;
  cout<<endl;
 }while(next_permutation(a.begin(), a.end()));
    return 0;
}