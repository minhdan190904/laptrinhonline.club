import java.util.Scanner;

public class Ex12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long[] a = new long[n];
        long temp = 0;
        long res = 0;
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();
            temp += a[i];
            res += temp;
        }
        System.out.println(res);
    }
}