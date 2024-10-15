#include "iostream"
#include "iomanip"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int main()
{
 db a,b,c; cin>>a>>b>>c;
 db res=(a*2+b*3+c*5)/10;
 cout<<rd(1)<<"Trung binh = "<<res;
    return 0;
}