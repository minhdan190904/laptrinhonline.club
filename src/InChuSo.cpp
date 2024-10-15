#include "iostream"
#include "string"
#include "map"
#define ll long long
#define db double
#define endl "\n"
#define rd(x) fixed<<setprecision(x)

const int MOD = 1e9+7;

using namespace std;

map<int, string> m;

string number_to_string(int n){
 if(n==10) return "muoi";
 if(n==1000) return "mot nghin";
 if(n%100==0) return m[n/100] + " tram";
 if(n%10==0 and n<100) return m[n/10] + " muoi";
 string s = to_string(n);
 int k = s.size();
 if(k==1) return m[n];
 if(k==2){
  if(s[1]-'0'==5){
   if(s[0]=='1') return "muoi lam";
   return m[s[0]-'0'] + " muoi lam";   
  }
  if(s[0]=='1') return "muoi " + m[s[1]-'0'];
  return m[s[0]-'0'] + " muoi " + m[s[1]-'0'];
 }
 else {
  if(s[2]-'0'==5){
   if (s[1]=='0') return m[s[0]-'0'] + " tram linh nam";
   else if(s[1]=='1') return m[s[0]-'0'] + " tram " + number_to_string(stoi(s.substr(1))); 
   return m[s[0]-'0'] + " tram " + m[s[1]-'0'] + " muoi lam";   
  }
  if (s[1]=='0') return m[s[0]-'0'] + " tram linh " + m[s[2]-'0'];
  else if(s[1]=='1') return m[s[0]-'0'] + " tram " + number_to_string(stoi(s.substr(1))); 
  return m[s[0]-'0'] + " tram " + m[s[1]-'0'] + " muoi " + m[s[2]-'0'];
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 m[1] = "mot";
 m[2] = "hai";
 m[3] = "ba";
 m[4] = "bon";
 m[5] = "nam";
 m[6] = "sau";
 m[7] = "bay";
 m[8] = "tam";
 m[9] = "chin";
 int a,b;cin>>a>>b;
 for(int i = a; i < b + 1; i++){
  cout<<number_to_string(i)<<endl;
 }
    return 0;
}