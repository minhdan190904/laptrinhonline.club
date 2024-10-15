#include "bits/stdc++.h"
#define int long long
#define rd(x) fixed<<setprecision(x)
#define pss pair<string, string>

using namespace std;

int cx[8] = {0,0,1,-1,1,-1,1,-1};
int cy[8] = {1,-1,0,0,1,1,-1,-1};
int n,m;

bool check1(int i){
 return i>=0 and i<= n-1;
}


bool check2(int i){
 return i>=0 and i<= m-1;
}
signed main(){
 int t1,t2;cin>>n>>m;
 int a[n+1][m+1];
 for(int i = 0; i < n; i++){
  for(int j = 0; j < m; j++){
   cin>>a[i][j];
  }
 }
 for(int i = 0; i < n; i++){
  for(int j = 0; j < m; j++){
   if(a[i][j]==-1){
    for(int k = 0; k < 8; k++){
     t1 = i + cx[k];
     t2 = j + cy[k];
     if(check1(t1) and check2(t2)){
      if(a[t1][t2] != -1) a[t1][t2]++;
     }
    }
   }
  }
 }
 for(int i = 0; i < n; i++){
  for(int j = 0; j < m; j++){
   printf("%lld ", a[i][j]);
  }
  cout<<endl;
 }
 return 0;
}