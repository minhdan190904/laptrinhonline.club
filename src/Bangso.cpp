#include "stdio.h"

int max(int a, int b){
 if(a>b) return a;
 return b;
}

int main(){
 int n,m;scanf("%d%d", &n,&m);
 int a[n+2][m+2];
 int b[n+2][m+2];
 for(int i = 1; i <= n; i++){
  for(int j = 1; j <= m; j++){
   scanf("%d", &a[i][j]);
  }
 }
 
 int res = 0;
 b[1][1] = a[1][1]; 
 
 for(int i = 1; i <= n; i++){
  for(int j = 1; j <= m; j++){
   if(i==1 and j!=1) b[i][j] = a[i][j]+b[i][j-1];
   else if(j==1 and i!=1) b[i][j] = a[i][j]+b[i-1][j];
   else if(j!=1 and i!=1) b[i][j] = a[i][j]+max(b[i][j-1], b[i-1][j]);
  }
 }
 printf("%d", b[n][m]);
 return 0;
}