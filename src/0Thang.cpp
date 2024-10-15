#include "iostream"
#include "iomanip"
#include "map"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int main()
{
 map<int,string> m;
 m[1] = "Mot";
 m[2] = "Hai";
 m[3] = "Ba";
 m[4] = "Tu";
 m[5] = "Nam";
 m[6] = "Sau";
 m[7] = "Bay";
 m[9] = "Chin";
 m[8] = "Tam";
 m[10] = "Muoi";
 m[11] = m[10] + " mot";
 m[12] = m[10] + " hai";
 int n;cin>>n;
 if(1<=n and n<=12) cout<<"Thang "<<m[n];
 else cout<<"Khong co";
    return 0;
}