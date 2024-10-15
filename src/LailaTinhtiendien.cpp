#include "iostream"
#include "iomanip"
#define int long long
#define db double
using namespace std;

void pri(db a){
 cout<<fixed<<setprecision(3)<<a<<endl;
}

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int n; cin>>n;
 db a[n], b[n];
 for(int i = 0 ; i< n; i++) cin>>a[i]>>b[i];
 int t; cin>>t;
 while(t--){
  int x; cin>>x;
  if(n==1) pri(x*b[0]);
  else
  {
   db res=0;
  for(int i = 1; i < n; i++){
   if(x>=a[i]) res+= b[i-1]*(a[i]-a[i-1]);
   else{
    res+= b[i-1]*(x-a[i-1]);
    break;
   }
  }
  if(x>a[n-1]) res+=b[n-1]*(x-a[n-1]);
  pri(res);
 }
}
    return 0;
}