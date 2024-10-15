#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int n, L, cnt=0, sum=0;
    cin >> n >> L;
    map<int,int>a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a[x]++;
    }
    auto it=a.end();
    it--;
    int d=it->first; // khúc gỗ dài nhất
    while(d){
        if(d==it->first){ // nếu tìm được khúc gỗ thấp hơn
            cnt+=it->second; // số khúc gỗ đang bị chặt
            it--;
        }
        sum += cnt;
        d--;
        if(sum>=L){cout << d; return 0;}
    }
    return 0;
}