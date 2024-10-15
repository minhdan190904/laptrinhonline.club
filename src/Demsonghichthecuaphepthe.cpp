#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,a,b) for(int i=a;i>=b;i--)
#define int long long
#define pii pair<int,int>
#define pb push_back
#define pf push_front
#define rd(x) fixed<<setprecision(x)
const int MOD=1e9+7;

using namespace std;

int merge(int *a, int l, int m, int r){
    int cnt = 0;
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while(i < x.size() and j < y.size()){
        if(x[i] <= y[j]) a[l] = x[i], i++, l++;
        else{
            cnt += x.size() - i;
            a[l] = y[j], j++, l++; 
        }
    }
    
    while(i < x.size()){
        a[l] = x[i];
        l++;
        i++;
    }
    while(j < y.size()){
        a[l] = y[j];
        l++;
        j++;
    }
    return cnt;
}

int mergeSort(int *a, int l, int r){
    int cnt = 0;
    if(l < r){
        int m = (l + r) / 2;
        cnt += mergeSort(a, l, m);
        cnt += mergeSort(a, m + 1, r);
        cnt += merge(a, l, m, r);
    }
    return cnt;
}

minhdan()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    cout << mergeSort(a, 0, n - 1);
    return 0;
}