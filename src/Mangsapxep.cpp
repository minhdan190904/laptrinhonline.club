import java.util.Scanner;

public class Main {
 public static void main(String[] args) {
  Scanner sc = new Scanner(System.in);
  int n = sc.nextInt();
  int[] a = new int[n];
  for (int i = 0; i < n; i++) {
   a[i] = sc.nextInt();
  }
  boolean c1 = true, c2 = true;
  for (int i = 1; i < n; i++) {
   if(a[i]<a[i-1]) c1 = false;
   if(a[i]>a[i-1]) c2 = false;
  }
  if(c1 || c2) System.out.println("YES");
  else System.out.println("NO");
 }
}