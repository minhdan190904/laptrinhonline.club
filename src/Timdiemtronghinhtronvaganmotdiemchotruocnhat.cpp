#include "iostream"
#include "iomanip"
#include "cmath"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

struct p{
 db x,y; 
};

void printRes(p a){
 printf("(%.3lf, %.3lf)", a.x, a.y);
}

db kc(p a, p b){
 return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

int main()
{
 p a, o;
 db r;
 cin>>o.x>>o.y>>r>>a.x>>a.y;
 db oa = kc(a,o);
 if(oa <= r) printRes(a);
 else{
  db k = r/oa;
  p i;
  i.x = k*(a.x-o.x)+o.x; 
  i.y = k*(a.y-o.y)+o.y;
  printRes(i); 
 }
    return 0;
}