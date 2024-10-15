#include "iostream"
#define int long long
#define db double
using namespace std;

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int n; cin>>n;
 int a[3] = {0,0,0};
 db x,y,h;
 for(int i = 0; i < n; i++){
  cin>>x>>y;
  h = x-y;
  if(h>0) a[0]++;
  else if(h<0) a[1]++;
  else a[2]++;
 }
 cout<<a[0]*a[1]+a[2]*a[1]+a[2]*a[0];
    return 0;
}