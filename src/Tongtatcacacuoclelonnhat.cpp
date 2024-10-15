#include "iostream"
#include "iomanip"
#define ll long long
#include "cmath"
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

ll S(ll n){
 if(n<=1) return 0;
 return ((n+1)/2) * ((n+1)/2) + S(n/2);
}

int main()
{
 ll t, a, b;
 cin>>t;
 while(t--){
  cin>>a>>b;
  cout<<S(b)-S(a-1)<<endl;
 }
    return 0;
}