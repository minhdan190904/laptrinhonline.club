#include "bits/stdc++.h"
#define int long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template <typename T>
//using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
const int MOD = 1e9+7;

using namespace std;

string solve(int a, int b){
    if(a==b) return "infinity";
    int cnt=0;
    int n=a-b;
    int temp;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(a%i==b and i!=1){
                cnt++;
            }
            temp=n/i;
            if(temp!=i and a%temp==b){
                cnt++;
            }
        }
    }
    return to_string(cnt);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,a,b;cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
    return 0;
}