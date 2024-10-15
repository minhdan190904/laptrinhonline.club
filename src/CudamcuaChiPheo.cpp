#include "iostream"
using namespace std;
int main()
{
 int x; cin >> x;
 int a = 1, i = 1;
 x -= 1;
 while(x >= a)
 {
  i++;
  a += i;
  x -= a;
 }
 cout << i;
 return 0;
}