#include "vector"
#include "iostream"
#include "queue"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

main()
{
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 int n, x; cin >> n;
 priority_queue<int> g;
 priority_queue<int, vector<int>, greater<int>> t;
 while(n--){
  cin >> x;
  if(g.size()==0 or x <= g.top()) g.push(x);
  else t.push(x);
  if(g.size()>t.size()+1){
   t.push(g.top());
   g.pop();
  }
  else if(g.size()<t.size()){
   g.push(t.top());
   t.pop();   
  }
  cout<<g.top()<<" ";
 }
    return 0;
}