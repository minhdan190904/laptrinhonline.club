#include "iostream"
using namespace std;
void Try(int n, string temp){
 if(temp.size()==n){
  cout<<temp<<endl;
  return;
 }
 if(temp.size()>=2 and temp.substr(temp.size()-2) == "10") Try(n, temp + "0");
 else{
  Try(n, temp + "0");
  Try(n, temp + "1");
 }
}
main()
{
 int n; cin >> n;
 Try(n, "");
    return 0;
}