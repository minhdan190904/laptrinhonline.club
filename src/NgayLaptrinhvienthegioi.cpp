#include "stdio.h"
int main()
{
 int y;
 scanf("%d", &y);
 if(y < 2009) printf("-1");
 else if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) printf("12.09.%d - Happy Programmer's Day!", y);
 else printf("13.09.%d - Happy Programmer's Day!", y);
 return 0;
}