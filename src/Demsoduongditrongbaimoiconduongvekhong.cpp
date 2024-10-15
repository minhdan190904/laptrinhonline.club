#include "iostream"
#include "iomanip"
#include "map"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)
const int M = 1e9+7;

using namespace std;

map<ll, ll> m;

ll heheboy(int n){
 if(m[n]) return m[n];
 if(n == 0) return 1;
 for(int i = 1; i*i<= n; i++){
  if(n%i==0) m[n] = (m[n]+ heheboy((i-1)*(n/i+1)))%M; 
 }
 return m[n];
}

int main()
{
 ll t; cin>>t;
 while(t--){
  ll n; cin >> n;
  cout<<heheboy(n)<<"\n";
 }
    return 0;
}