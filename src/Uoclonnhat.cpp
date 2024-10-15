#include "iostream"
#include "cmath"
const int MOD=1e9+7;
using namespace std;
main()
{
    int t; cin >> t;
    while(t--){
     int n; cin >> n;
     if(n%2!=0) n--;
     cout<<(int)(n/2)<<endl;
 }
    return 0;
}