#include <iostream>
#include <vector>
using namespace std;

int n,m;
pair<int,int> b[] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
int res,x,y;

int check(int x, int n){
 return x>=0 and x<n;
}

void TRY(vector<vector<int>>& a, vector<vector<bool>> v, pair<int,int> s){
 //suy bien
 v[s.first][s.second] = true;
 if(a[s.first][s.second] == 2){
  for(int i = 0; i < n; i++){
   for(int j = 0; j < m; j++){
    if(v[i][j] == false) return;
   }
  }
  res++;
  return;
 }
 //quay lui
 for(int i = 0; i < 4; i++){
  x = s.first+b[i].first;
  y = s.second+b[i].second;
  if(check(x,n) and check(y,m) and !v[x][y]) TRY(a,v, {x, y});
 }
}

int main()
{
 int t; cin>>t;
 while(t--){
  res = 0;
  cin>>n>>m;
  pair<int,int> s;
  vector<vector<int>> a(n, vector<int>(m));
  vector<vector<bool>> v(n, vector<bool>(m, false));
  for(int i = 0; i < n; i++){
   for(int j = 0; j < m; j++){
    cin>>a[i][j];
    if(a[i][j]==1) s = {i,j};
    else if(a[i][j]==-1) v[i][j]=true;
   }
  }
  TRY(a,v,s);
  cout<<res<<endl;
 }
 return 0;
}