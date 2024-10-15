#include "bits/stdc++.h"
#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int M = 1e9+7;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int x,y,d,temp;

void mr_eclid(int a, int b){
    if(b == 0){
        x = 1;
        y = 0;
        d = a;
    }
    else{
        mr_eclid(b,a%b);
        temp = x;
        x = y;
        y = temp - y * (a/b);
    }
}

// ax+my=1

int nd_modul(int a, int b){
    mr_eclid(a,b);
    if(d!=1) return 0;
    return (x%b+b)%b;
}


using namespace std;
signed main(){
    int a,n; cin>>a>>n;
    int tt = M*1e9;
    if(a<0){
        a = (tt+a)%M;
    }
    a%=M;
    int A = 1;
    int B = 1;
    for(int i = 1; i <= n; i++){
        A *= (a + i);
        A%=M;
        B *= i;
        B%=M;
    }
    cout<<(A*nd_modul(B,M))%M;
    return 0;
}