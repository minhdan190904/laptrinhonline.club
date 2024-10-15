#include <iostream>
using namespace std;
class GFG {
public:
 int findStep(int n)
 {
  if (n == 0)
   return 1;
  else if (n < 0)
   return 0;
  else
   return findStep(n - 3) + findStep(n - 2)
    + findStep(n - 1);
 }
};
int main()
{
 GFG g;
 int n; cin >> n;
 cout << g.findStep(n);
 return 0;
}