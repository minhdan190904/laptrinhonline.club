#include "iostream"
#include "iomanip"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int main()
{
 int t,n,res; cin >> t;
 for(int j = 1; j<=t; j++){
  cin >> n;
  int a[n]; for(int &x:a) cin>>x;
  res = 0;
  bool vis[n+1] = {};
  for(int i = 0; i < n; i++){
   if(a[i]==1){
    res++;
    vis[1]=true;
    continue; 
   }
   
   if(!vis[a[i]-1]) res++;
   vis[a[i]] = true;
  }
  printf("#Case %d: %d\n", j, res); 
 }
    return 0;
}