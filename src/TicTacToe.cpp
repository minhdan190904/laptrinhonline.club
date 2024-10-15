#include<iostream>
using namespace std;

int main() {
 int x, y;
 cin >> x >> y;
 if(x % 2 == 1 && y % 2 == 0) cout << "X";
 else if(x == 5 && y % 2 == 1) cout << "D";
 else if(x % 2 == 1 && y != 5 && y % 2 == 1) cout << "X";
 else cout << "D";
 return 0;
}