import java.util.*;

public class Main {
 public static void genMatrix(int n) {
  int m1,m2;
  for (int i = 1; i <= n; i++) {
   for (int j = 1; j <= n; j++) {
    m1 = Math.min(i, j);
    m2 = Math.min(n+1-i, -j+n+1);
    System.out.printf("%3d", Math.min(m1, m2));
   }
   System.out.println();
  }
 }
 public static void main(String[] args) {
  try (Scanner sc = new Scanner(System.in)) {
   int n;
   while(true) {
    n = sc.nextInt();
    if(n == 0) break;
    genMatrix(n);
   }
  }
 }
}