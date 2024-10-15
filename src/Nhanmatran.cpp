#include "iostream"
#include "vector"

using namespace std;

int main()
{
 int n,m,p; cin>>n>>m>>p;
 int a[n][m], b[m][p];
 for(int i = 0; i < n; i++){
  for(int j = 0; j < m; j++){
   cin>>a[i][j];
  }
 }

 for(int i = 0; i < m; i++){
  for(int j = 0; j < p; j++){
   cin>>b[i][j];
  }
 }

 vector<int> res;

 for(int i = 0; i < n; i++){
  for(int j = 0; j < p; j++){
   int temp = 0;
   for(int k = 0; k < m; k++){
    temp += a[i][k] * b[k][j];
   }
   res.push_back(temp);
  }
 }

 int g = 0;

 for(int i = 0; i < n; i++){
  for(int j = 0; j < p; j++){
   printf("%10d", res[g++]);
  }
  cout<<endl;
 }

    return 0;
}