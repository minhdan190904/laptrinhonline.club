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

int bs(int l, int r){
    for(int i=40; i>=1; i--){
        int le = 1, ri=pow(r,1.0/i)+1;
        int mi, temp;
        while(le<=ri){
            mi=(le+ri)/2;
            temp=pow(mi,i);
            if(temp>r) ri=mi-1;
            else if(temp<l) le=mi+1;
            else return i;
        }
    }
    return 1;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,l,r; cin>>t;
    while(t--){
        cin>>l>>r;
        cout<<bs(l,r)<<"\n";
    }
    return 0;
}