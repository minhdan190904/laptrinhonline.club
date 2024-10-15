#include "stdio.h" 
int main()
{
 int n;
 scanf("%d", &n);
 if (n % 100 != 0)
 {
  printf("-1");
  return 0;
 }
 else
 {
  int dem = 0;
  if (n >= 500000)
  {
   dem += n / 500000;
   n = n % 500000;
  }
  if (n >= 200000)
  {
   dem += n / 200000;
   n = n % 200000;
  }
  if (n >= 100000)
  {
   dem += n / 100000;
   n = n % 100000;
  }
  if (n >= 50000)
  {
   dem += n / 50000;
   n = n % 50000;
  }
  if (n >= 20000)
  {
   dem += n / 20000;
   n = n % 20000;
  }
  if (n >= 10000)
  {
   dem += n / 10000;
   n = n % 10000;
  }
  if (n >= 5000)
  {
   dem += n / 5000;
   n = n % 5000;
  }
  if (n >= 2000)
  {
   dem += n / 2000;
   n = n % 2000;
  }
  if (n >= 1000)
  {
   dem += n / 1000;
   n = n % 1000;
  }
  if (n >= 500)
  {
   dem += n / 500;
   n = n % 500;
  }
  if (n >= 200)
  {
   dem += n / 200;
   n = n % 200;
  }
  if (n >= 100)
  {
   dem += n / 100;
   n = n % 100;
  }
  printf("%d",dem);
 }
 return 0;
}