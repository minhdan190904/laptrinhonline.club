#include "iostream"
#include "iomanip"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;
const int mod = 1e9+7;
void MyPow(int n, int& a, int& b){
 if(n==0){
  a=1;b=0;
  return;
 }
 int x,y;
 MyPow(n/2,x,y);
 a=x*x+y*y;
 b=x*y+y*(x-y); 
 if(a<0){
  a = (a+mod)%mod;
 }
 else a%=mod;
 if(b<0){
  b = (b+mod)%mod;
 }
 else b%=mod;
 if(n%2){
  a = a + b;
  b = a - b;
 if(a<0){
  a = (a+mod)%mod;
 }
 else a%=mod;
 if(b<0){
  b = (b+mod)%mod;
 }
 else b%=mod;
 }
}

main()
{
 int a,b;
 int n; cin>>n;
 MyPow(n+1,a,b);
 cout<<a-1;
    return 0;
}