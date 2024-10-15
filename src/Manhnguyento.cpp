#include <iostream>
#include <vector>

using namespace std;

vector<int> snt;

bool check(int n){
    for(int i = 0; i < snt.size() && snt[i] * snt[i] <= n; i++){
        if(n % snt[i] == 0) return false;
    }
    return n > 1;
}

int t_snt(int n){
    int res = 0;
    for(int i = 0; i < snt.size() && snt[i] * snt[i] <= n; i++){
        if(n % snt[i] == 0){
            while(n % snt[i] == 0){
                n /= snt[i];
            }
            res++;
        }
    }
    if(n != 1) res++;
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; 
    cin >> n;
    int ma = -1;
    int res;
    for(int i = 2; i * i <= (1e6 + 9); i++){
        if(check(i)){
            snt.push_back(i);
        }
    }
    int M = -1, x;
    while(n--){
        cin >> x;
        int k = t_snt(x);
        if(k > M){
            res = x;
            M = k;            
        }
    }
    cout << res;
    return 0;
}