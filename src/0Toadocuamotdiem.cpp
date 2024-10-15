#include "iostream"
#include "iomanip"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

string solve(db x, db y){
 if(x==0 and y == 0) return "Origem";
 if(x == 0) return "Eixo Y";
 else if(y == 0) return "Eixo X";
 else{
  if(x>0 and y>0) return "Q1";
  if(x<0 and y>0) return "Q2";
  if(x<0 and y<0) return "Q3";
  return "Q4";
 }
}

int main()
{
 db x,y;cin>>x>>y;
 cout<<solve(x,y);
    return 0;
}