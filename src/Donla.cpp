#include "iostream"
#include "algorithm"
#include "vector"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;
int a[1000008]={};
using namespace std;
main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n,q,x,c,d;
 cin>>n>>q;
 while(n--){
  cin>>x; a[x]++;
 }
 for(int i = 2; i < 1000003; i++){
  a[i] += a[i-1];
 }
 while(q--){
  cin>>c>>d; cout<<a[d]-a[c-1]<<endl;
 }
    return 0;
}