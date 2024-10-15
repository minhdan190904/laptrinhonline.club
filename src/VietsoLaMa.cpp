#include "iostream"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n; cin >> n;
 int cnt10,cnt5;
 cnt10 = n/10;
 n%=10;
 cnt5 = n/5;
 n%=5;
 while(cnt10--)cout<<"X";
 while(cnt5--)cout<<"V";
 while(n--)cout<<"I";
    return 0;
}