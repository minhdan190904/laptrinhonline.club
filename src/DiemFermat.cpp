#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

typedef pair<double, double> diem;
#define x first
#define y second

double kc(diem A, diem B) {
 A.x -= B.x; A.y -= B.y;
 return(sqrt(A.x * A.x+ A.y * A.y));
}

int main() {
 diem A, B, C, M;
 cin >> A.x>> A.y >> B.x>> B.y >> C.x>> C.y;
 M.x = (A.x+B.x+C.x)/3;
 M.y=(A.y+B.y+C.y)/3;
 double esp = 1e-5, k = kc(A, M) + kc(M, B) +kc(C, M), d = 10;
 while(d > esp) {
  diem next[] = {{M.x - d, M.y},{M.x + d, M.y},{M.x, M.y - d},{M.x, M.y + d}};
  for(diem N : next) {
   double z = kc(A, N) + kc(B, N) + kc(C, N);
   if(z < k) {k = z; M = N; d = d * 2; break;}
  }
  d /= 2;
 }
 cout << setprecision(3) << fixed << M.x<< " " << M.y;
 return 0;
}