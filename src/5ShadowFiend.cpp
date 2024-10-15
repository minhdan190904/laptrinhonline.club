#include "bits/stdc++.h"
#define ll long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

class Pt{
public:
 db x,y;
 friend istream& operator>>(istream& is, Pt& p){
  is>>p.x>>p.y;
  return is;
 }
};

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int n,m;cin>>n>>m;
 Pt a[n], b[m];
 for(auto &x:a) cin>>x;
 for(auto &x:b) cin>>x;
 int min_pos;
 for(int i = 0; i < n; i++){
  db M = INT_MAX;
  for(int j = 0; j < m; j++){
   db temp = abs(a[i].x-b[j].x) + abs(a[i].y-b[j].y);
   if(temp < M){
    M = temp;
    min_pos = j;
   }
  }
  cout<<min_pos+1<<endl;
 }
    return 0;
}