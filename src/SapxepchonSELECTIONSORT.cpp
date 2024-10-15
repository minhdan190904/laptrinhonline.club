#include "iostream"
using namespace std;
struct toado
{
 int x, y;
};
void sxchonX(toado L[], int n) {
 int k = n / 2, in;
 toado min, temp;
 for(int i = 0; i < n-1; i++){
  min = L[i];
  in = i;
  for(int j = i + 1; j < n; j++){
   if (min.x > L[j].x) {
    min = L[j];
    in = j;
            }
        }
        temp = L[in];
        L[in] = L[i];
        L[i] = temp;
        if (i == k - 1) break;
  }
}
void sxchonY(toado L[], int n) {
 int k = n / 2, in;
 toado max, temp;
 for(int i = 0; i < n-1; i++){
  max = L[i];
  in = i;
  for(int j = i + 1; j < n; j++){
   if (max.y < L[j].y) {
    max = L[j];
    in = j;
            }
        }
        temp = L[in];
        L[in] = L[i];
        L[i] = temp;
        if (i == k - 1) break;
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
    sxchonX(L, n);
    in(L, n);
    cout << endl;
    sxchonY(L, n);
    in(L, n);
    return 0;
}