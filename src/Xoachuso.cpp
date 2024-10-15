#include <iostream>
#include <vector>
#include <string>

using namespace std;

long long solve(long long a, long long b){
    string s1 = to_string(a);
    string s2 = to_string(b);
    if(s1.size() < s2.size()) return a;
    s1 = s1.substr(s1.size() - s2.size());
    if(s1.size() < s2.size()) return stoll(s1);
    for(long long i = 0; i < s1.size(); i++){
        if(s1[i] < s2[i]) break;
        else if(s2[i] < s1[i]){
            s1[i] = '0';
            if(stoll(s1) <= stoll(s2)) break;
            else continue;
        }
        else continue;
    }
    return stoll(s1);
}

int main() {
    vector<long long> a;
    long long x;
    while(1){
        cin >> x;
        if(x == -1) break;
        a.push_back(x);
    }
    long long n = a.size();
    long long res = a[0];
    long long temp = a[0];
    vector<long long> k;
    for(long long i = 1; i < n; i++){
     k.push_back(temp);
        temp = solve(a[i], temp);
        if(temp == 0) break;
        res += temp;
    }
    cout<<res;
    return 0;
}