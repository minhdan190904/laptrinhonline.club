#include "iostream"
#include "iomanip"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int tach(int n){
 if(n%2!=0 or n<=4) return 1;
 return tach(n/2+2) + tach(n/2-2);
}

int main()
{
 int n; cin >> n;
 cout<<tach(n);
    return 0;
}