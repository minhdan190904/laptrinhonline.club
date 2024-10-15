#include "bits/stdc++.h"
using namespace std;
#define db double
#define rd(x) fixed<<setprecision(x)
#define pdd pair<db, db>
#define x first
#define y second

db dt(pdd a, pdd b){
 return b.x*a.y - a.x*b.y;
}

db S(pdd a, pdd b, pdd c, pdd d){
 return abs(dt(a,b)+dt(b,c)+dt(c,d)+dt(d,a))/2;
}

int main()
{
 pair<db, db> a,b,c,d;
 cin>>a.x>>a.y;
 cin>>b.x>>b.y;
 cin>>c.x>>c.y;
 cin>>d.x>>d.y;
 cout<<rd(3)<<S(a,b,c,d);
    return 0;
}