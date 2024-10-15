#include "iostream"
#include "iomanip"
#include "map"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int main()
{
 map<int,int> mh, mc;
 int n, m; cin>>n>>m;
 while(m--){
  int so; char x;
  cin>>x>>so;
  if(x=='H') mh[so]++;
  else mc[so]++;
 }
 int res=0;
 for(int i = 0; i < n; i++){
  for(int j = 0; j < n; j++){
   if((mh[i] + mc[j])%2!=0) res++;
  }
 }
 cout<<res;
    return 0;
}