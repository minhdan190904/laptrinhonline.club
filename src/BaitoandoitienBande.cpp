#include "queue"
#include "vector"
#include "iostream"
using namespace std;

int main()
{
    int n,q,x;
    cin>>n>>q;
    vector<int> a;
    while(n--) {cin>>x; a.push_back(x);}
    int d[10004]={};
    fill(d+1,d+10001,-1);
    queue<int> Q;
    for(int x:a) {Q.push(x); d[x]=1;}
    while(Q.size())
    {
        int u=Q.front(); Q.pop();
        for(int v:a) if(u+v<=1e4 && d[u+v]==-1) {Q.push(u+v); d[u+v]=d[u]+1;}
    }
 cout<<d[q];
}