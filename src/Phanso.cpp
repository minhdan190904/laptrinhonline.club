#include "iostream"
#include "map"
using namespace std;

int main()
{
 int n,q ;cin>>n>>q;
 int a[n], b[n];
 int c[n+1][10];
 int d[n+1][10];
 map<int,int> m1;
 map<int,int> m2;
 for(int i = 0; i < n; i++){
  cin>>a[i];
  m1[a[i]]++;
  for(int j = 1; j < 10; j++){
   c[i][j] = m1[j];
  }
 }
 for(int i = 0; i < n; i++){
  cin>>b[i];
  m2[b[i]]++;
  for(int j = 1; j < 10; j++){
   d[i][j] = m2[j];
  }
 }
 while(q--){
  int l, r; cin>>l>>r;
  l--;
  r--;
  int k1[10], k2[10];
  if(l==0){
   for(int i = 1; i <= 9; i++){
    k1[i] = c[r][i];
    k2[i] = d[r][i];
   }   
  }
  else{
   for(int i = 1; i <= 9; i++){
    k1[i] = c[r][i] - c[l-1][i];
    k2[i] = d[r][i] - d[l-1][i];
   }   
  }
  int ba = k1[3] + k1[6] + 2*k1[9] - (k2[3] + k2[6] + 2*k2[9]);
  int bay = k1[7] - k2[7];
  if(ba < 0 or bay < 0) cout<<"N";
  else cout<<"Y";
  cout<<endl;
 }
    return 0;
}