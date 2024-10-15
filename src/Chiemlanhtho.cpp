#include "iostream"
#define ll long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

class P{
public:
 int x,y;
 friend istream& operator>>(istream& is, P& p){
  is>>p.x>>p.y;
  return is;
 }
};

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int t; cin>>t;
 while(t--){
  P a, b;
  char c; cin>>a>>b>>c;
  swap(a.x,a.y);
  swap(b.x,b.y);
  int red, blue;
  if(c == 'U'){
   red = b.x-1;
   blue = a.x - red;
  }
  else if(c == 'D'){
   blue = b.x;
   red = a.x-blue;
  }
  else if(c == 'L'){
   red = b.y-1;
   blue = a.y-red;
  }
  else{
   blue = b.y;
   red = a.y-blue;
  }
   if(red>blue)cout<<"RED"<<endl;
 else if(red<blue)cout<<"BLUE"<<endl;
 else cout<<"DRAW"<<endl;
 }
    return 0;
}