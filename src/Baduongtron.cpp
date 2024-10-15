#include "iostream"
#include "iomanip"
#include "map"
#include "cmath"
#define ll long long
#define pll pair<long long, long long>
#define x first
#define y second
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

bool check(pll a, pll b){
 return a.x > b.x;
}

bool check(ll i, ll j, ll x, ll y, ll r){
 return pow(i-x, 2) + pow(j-y, 2) < r*r;
}

int main()
{
 ll x1,x2,x3,y1,y2,y3,r1,r2,r3;
 cin>>x1>>y1>>r1;
 cin>>x2>>y2>>r2;
 cin>>x3>>y3>>r3;
 ll xmax = max(x1-r1,max(x2-r2, x3-r3));
 ll xmin = min(x1+r1,min(x2+r2, x3+r3));
 ll ymax = max(y1-r1,max(y2-r2, y3-r3));
 ll ymin = min(y1+r1,max(y2+r2, y3+r3));
 ll res=0;
 for(ll i = xmax; i <= xmin; i++){
  for(ll j = ymax; j <= ymin; j++){
   if(check(i,j,x1,y1,r1) and check(i,j,x2,y2,r2) and check(i,j,x3,y3,r3)) res++;
  }
 }
 cout<<res;
    return 0;
}