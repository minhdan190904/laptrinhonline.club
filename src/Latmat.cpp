#include "iostream"
#define int long long
#define db double
using namespace std;

int cnt(int n, int p){
 int res1, res2;
 if(n==p) return 0;
 if(p<=1) return 0;
 if(n-p<=1 and n%2!=0) return 0;
 res1 = p/2;
 if(n%2==0 and p%2==0) res2 = (n-p)/2;
 else if(n%2==0 and p%2!=0) res2 = (n-p)/2+1;
 else res2 = (n-p)/2;
 return min(res1,res2);
}

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int n, p; cin>>n>>p;
 cout<<cnt(n,p);
    return 0;
}