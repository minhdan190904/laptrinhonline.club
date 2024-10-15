#include "bits/stdc++.h"
using namespace std;
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)
#define MOD 1000000007
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define kazuha_ve_di main
#define pii pair<int,int>
#define x first
#define y second
void setup(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fastIO
}

struct ss{
 bool operator()(int& a, int& b){
  if(a%3==b%3) return a>b;
  return a%3>b%3;
 }
};

kazuha_ve_di(){
 int n;cin>>n;
 priority_queue<int, vector<int>, ss> q;
 int a[n]; for(int &x:a){
  cin>>x;
  q.push(x);
 }
 while(q.size()){
  cout<<q.top()<<" ";
  q.pop();
 }
 return 0;
}