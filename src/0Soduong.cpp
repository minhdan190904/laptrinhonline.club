#include "bits/stdc++.h"
#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;
signed main(){
    float x;
    int res=0;
    for(int i = 0; i < 6; i++){
        cin>>x;
        if(x>0) res++;
    }
    printf("%d so duong", res);
    return 0;
}