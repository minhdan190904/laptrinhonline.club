#include "iostream"
#include "iomanip"
#include "math.h"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int main()
{
 db n, m, k; cin >> n >> m >> k;
 db temp = 1/m;
 db res = n * (pow(temp, k+1)-1)/(temp-1);
 cout<<rd(6)<<res;
    return 0;
}