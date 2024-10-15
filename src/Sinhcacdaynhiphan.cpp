#include "bits/stdc++.h"
#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

void Try(string temp, int n){
 if(temp.size()==n){
  cout<<temp<<endl;
  return; 
 }
 Try(temp + "0", n);
 Try(temp + "1", n);
}

main()
{
 int n; cin >> n;
 Try("", n);
    return 0;
}