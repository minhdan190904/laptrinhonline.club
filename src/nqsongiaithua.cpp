#include "bits/stdc++.h"
#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const long long M=2*(long long)1e9 +14;

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

int bP(int a, int b, int m) {
    int res = 1;
    a = a % m;
    while (b) {
        if (b&1)
            res=(res*a)%m;
        b>>= 1;
        a=(a*a)%m;
    }
    return res;
}

int a[1000005] = {};

using namespace std;
signed main(){
    int n,z,A=1; cin>>n;
    a[1] = 1;
    for(int i = 2; i <= 1e6+5; i++){
        a[i] = (a[i-1]*i)%M;
        a[i]%=M;
    }
    while(n--){
        cin>>z;
        A=(A*a[z])%M;
    }
    cin>>z;
    int B = bP(a[z],1e9+5,M);
    cout<<(A*B)%M;
    return 0;
}