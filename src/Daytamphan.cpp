#include "bits/stdc++.h"

#define int long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int res = 0, k;

void Try(string temp, int n){
 if(temp.size()==n){
  for(int i = 0; i < temp.size(); i++){
   cout<<temp[i]<<" ";
  }
  cout<<endl;
  res++;
  return;
 }
 if(temp.size()>0 and temp[temp.size()-1] != '0') Try(temp + "0", n);
 if(temp.size()>0 and temp[temp.size()-1] != '1' and temp[temp.size()-1] != '2') Try(temp + "1", n);
 if(temp.size()>0 and temp[temp.size()-1] != '1' and temp[temp.size()-1] != '2') Try(temp + "2", n);
}

main() {
    int n; cin >> n;
    Try("0", n);
    Try("1", n);
    Try("2", n);
    cout<<res;
    return 0;
}