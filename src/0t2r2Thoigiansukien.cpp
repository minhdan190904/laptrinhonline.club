#include <iostream>
using namespace std;

int slv(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

int main() {
    int d1, h1, m1, s1;
    string st1, a, b;
    cin >> st1 >> d1;
    cin >> h1 >> a >> m1 >> b >> s1;

    int d2, h2, m2, s2;
    string st2;
    cin >> st2 >> d2;
    cin >> h2 >> a >> m2 >> b >> s2;

    int d, h, m, s, S;
    if (h1 < h2) {
        d = d2 - d1;
        S = slv(h2, m2, s2) - slv(h1, m1, s1);
    } else if (h1 > h2){
        d = d2 - d1 - 1;
        S = slv(h2 + 24, m2, s2) - slv(h1, m1, s1);
    }
    else
    {
     if(m1 < m2)
     {
       d = d2 - d1;
          S = slv(h2, m2, s2) - slv(h1, m1, s1);
  }
  else if(m1 > m2)
  {
   d = d2 - d1 - 1;
        S = slv(h2 + 24, m2, s2) - slv(h1, m1, s1);
  }
  else
  {
   if(s1 <= s2)
   {
   d = d2 - d1;
             S = slv(h2, m2, s2) - slv(h1, m1, s1);
     }  
     else
     {
         d = d2 - d1 - 1;
        S = slv(h2 + 24, m2, s2) - slv(h1, m1, s1);
     }
  }
 }
    h = S / 3600;
    m = (S - h * 3600) / 60;
    s = S - h * 3600 - m * 60;

    cout << d << " Ngay" << endl;
    cout << h << " Gio" << endl;
    cout << m << " Phut" << endl;
    cout << s << " Giay" << endl;

    return 0;
}