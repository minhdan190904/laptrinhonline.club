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

int a[20], n, k, sum=0,avg,cnt=0;

void TRY(int id, int temp, int gr){
    if(gr==k){
        cnt++;
        return;
    }
    if(id==n-1) return;
    if(temp==avg) TRY(id+1,a[id+1],gr+1);
    TRY(id+1,temp+a[id+1],gr);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%k!=0){
        cout<<0; return 0;
    }
    avg=sum/k;
    TRY(0,a[0],1);
    cout<<cnt;
    return 0;
}