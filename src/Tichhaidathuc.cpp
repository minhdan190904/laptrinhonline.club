#include "iostream"
#include "iomanip"
#include "vector"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int main()
{
 int n, m;
 cin >> n;
 db a[n + 1];
 for(db &x:a) cin>>x;
 cin >> m;
 db b[m + 1]; 
 for(db &x:b) cin>>x;
 db c[n+m+2] = {};
 for(int i = 0 ; i <= n; i++){
  for(int j = 0; j <= m; j++){
   c[i+j] += a[i] * b[j];
  }
 }
 int check = 0;
 vector<db> res;
 for(int i = n+m+1 ; i >= 0; i--){
  if(c[i] != 0) check = 1;
  if(check == 1 and c[i] != 0) res.push_back(c[i]);
 }
 if(res.size()==0){
  cout<<0<<endl<<"0.00";
 }
 else{
  cout<<res.size()-1<<endl;
  for(int i = res.size()-1; i >= 0; i--){
   cout<<rd(2)<<res[i]<<" ";
  }
 }
    return 0;
}