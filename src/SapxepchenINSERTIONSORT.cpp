#include "iostream"
using namespace std;
struct toado
{
 int x, y;
};
void sxchenX(toado L[], int n) {
 int l = n / 2;
 for(int i = 1; i < n; i++){
  int k = i;
  while(k > 0 and L[k].x < L[k-1].x){
   swap(L[k], L[k-1]);
   k--;
  }
  if(i == l - 1) break;
 }
}
void sxchenY(toado L[], int n) {
 int l = n / 2;
 for(int i = 1; i < n; i++){
  int k = i;
  while(k > 0 and L[k].y > L[k-1].y){
   swap(L[k], L[k-1]);
   k--;
  }
  if(i == l - 1) break;
 }
}
void in(toado L[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "(" << L[i].x << "," << L[i].y << ") ";
    }
}
int main() {
 int n; cin >> n;
 toado L[n];
 for(int i = 0; i < n; i++)
 {
  cin >> L[i].x >> L[i].y;
 }
    sxchenX(L, n);
    in(L, n);
    cout << endl;
    sxchenY(L, n);
    in(L, n);
    return 0;
}