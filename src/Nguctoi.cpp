#include "iostream"
using namespace std;
int check(int a, int b, int c){
 if((a+b+c)%9!=0) return 0;
 int k = (a+b+c)/9;
 int mi = min(a, min(b,c));
 if(k > mi) return 0;
 return 1;
}
int main()
{
 int a,b,c; cin>>a>>b>>c;
 if(check(a,b,c)) cout<<"YES";
 else cout<<"NO";
    return 0;
}