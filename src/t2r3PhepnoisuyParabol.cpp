#include "stdio.h"
#include "math.h"
#define db double
int main()
{
 int n = 3;
  db x[3], y[3];
  for(int i = 0; i < 3; i++){
   scanf("%lf%lf", &x[i], &y[i]);
  }
  db X, D, P = 0;
  scanf("%lf", &X);
  for (int k = 0; k < n; k++)
    {
      D = 1;
      for (int i = 0; i < n; i++)
        {
          if (i != k) D *= (X - x[i]) / (x[k] - x[i]);
        }
      P += D * y[k];
    }
    printf("%.1lf", P);
 return 0;
}