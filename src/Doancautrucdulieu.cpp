#include "bits/stdc++.h"
#define ll long long
#define db double
#define minhdan main
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll t; cin >> t;
 while(t--){
  ll n; cin >> n;
  ll c1 = 2, c2 = 3, c3 = 4, c;
  stack<ll> st;
  queue<ll> q;
  priority_queue<ll> pq;
  while(n--){
   string s; ll x;
   cin >> s >> x;
   if(s == "vao"){
    st.push(x);
       q.push(x);
    pq.push(x);
   }
   else{
    if(st.empty() or q.empty() or pq.empty()){
     c1 = c2 = c3 = 0;
     break;
    }
    if(st.top() != x) c1 = 0;
    st.pop();
    if(q.front() != x) c2 = 0;
    q.pop();
    if(pq.top() != x) c3 = 0;
    pq.pop();
   }
  }
   c = c1 + c2 + c3;
   if(c == 0) cout << "Khong thuoc" << endl;
   else if(c > 4) cout << "Khong chac" << endl;
   else if(c == c1) cout << "Ngan xep" << endl;
   else if(c == c2) cout << "Hang doi" << endl;
   else cout << "Hang doi uu tien" << endl;
 }
    return 0;
}