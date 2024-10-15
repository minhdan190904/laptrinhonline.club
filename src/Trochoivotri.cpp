#include "iostream"
#include "iomanip"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int main()
{
 int n; cin >> n;
 int a[n]; for(int &x:a) cin>>x;
 int res1 = 0, res2 = 0;
 bool vis[n+1] = {};
 for(int i = 0; i < n; i++){
  if(a[i]==1){
   res1++;
   vis[1]=true;
   continue; 
  }
  if(a[i]==2){
    res2++;
    vis[2]=true;
    continue;
  }
  if(a[i]%2!=0){
   if(!vis[a[i]-2]) res1++;
   vis[a[i]] = true;
  }
  else{
   if(!vis[a[i]-2]) res2++;
   vis[a[i]] = true;
  }
 }
 cout<<res1<<endl<<res2;
    return 0;
}