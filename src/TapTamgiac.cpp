#include<iostream>
#include "queue"
#include "algorithm"
using namespace std;
int main()
{
 int n,a[100005],res=0;
 scanf("%d",&n);
 for(int i=0;i<n;i++) scanf("%d",&a[i]);
 sort(a,a+n,greater<int>());
 queue<int> Q;
 for(int i=0;i<n;i++)
 {
     while(Q.size()>1 && Q.front()>=Q.back()+a[i]) Q.pop();
  Q.push(a[i]);
  if(res<Q.size()) res=Q.size();
 }
 if(res<3) printf("Khong the tao ra day thoa man");
 else printf("%d",res);
 return 0;
}