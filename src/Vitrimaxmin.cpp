#include "bits/stdc++.h"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n; cin >> n;
 int a[n]; int mi = INT_MAX;
 int ma = -1;
 int ma_pos ,mi_pos;
 for(int i = 0 ; i < n; i++){
  cin>>a[i];
  if(mi > a[i]) mi = a[i], mi_pos = i;
  if(ma < a[i]) ma = a[i], ma_pos = i;
 }
 cout<<mi_pos<<" "<<ma_pos;
    return 0;
}