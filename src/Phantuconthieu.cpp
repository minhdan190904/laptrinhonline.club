#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,n=1,s=0;
    while(cin>>x){s+=x;n++;}
    cout<<n*(n+1)/2-s;
}