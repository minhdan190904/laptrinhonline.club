#include "iostream"
#include "map"
#include "stack"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 map<char, int> m = {{'(', 1}, {'[', 2}, {'{',3}};
 int t; cin >> t;
 while(t--){
  stack<char> st;
  string s; cin >> s;
  int check = 1;
  for(char c:s){
   if(c == '(' or c == '{' or c == '['){
    if(st.size() > 0 and m[st.top()] < m[c]){
     check = 0;
     break;
    }
    else st.push(c);
   }
   
   else if(c == ')'){
    if(st.size() == 0 or st.top() != '('){
     check = 0;
     break;
    }
    else st.pop();
   }
   
   else if(c == ']'){
    if(st.size() == 0 or st.top() != '['){
     check = 0;
     break;
    }
    else st.pop();
   }
   
   else{
    if(st.size() == 0 or st.top() != '{'){
     check = 0;
     break;
    }
    else st.pop();
   } 
   
  }
  if(check and st.empty()) cout << "Dung" << endl;
  else cout << "Sai" << endl;
 }
    return 0;
}