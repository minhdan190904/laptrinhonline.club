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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> at,bt,c;
    int n,m,p;cin>>n>>m>>p;
    int a[n],b[m];
    for(int &x:a)cin>>x;
    for(int &x:b)cin>>x;
    reverse(a, a + n);
    reverse(b, b + m);
    for(int x:a) at.push(x);
    for(int x:b) bt.push(x);
    string s[p]; for(auto &x:s) cin>>x;
    reverse(s, s + p);
    for(auto x:s){  
        if(x=="PUSH_A"){
            c.push(at.top());
            at.pop();
        }
        else if(x=="PUSH_B"){
            c.push(bt.top());
            bt.pop();           
        }
        else if(x=="POP_A"){
            at.push(bt.top());
            bt.pop();    
        }
        else{
            bt.push(at.top());
            at.pop(); 
        }
    }
    while(c.size()){
        cout<<c.top()<<" ";
        c.pop();
    }
    cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}