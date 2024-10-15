import java.util.Scanner;

public class Ex3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Input the size of the array and the target sum
        int n = sc.nextInt();
        long x = sc.nextLong();
        
        // Input the array elements
        long[] a = new long[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();
        }
        
        // Find and print the pair of elements whose sum is equal to x
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] + a[j] == x) {
                    if (a[i] < a[j]) {
                        System.out.printf("%d %d", a[i], a[j]);
                    } else {
                        System.out.printf("%d %d", a[j], a[i]);
                    }
                    return; // Exit the program after finding the pair
                }
            }
        }
        
        // If no such pair is found
        System.out.println("No pair found.");
    }
}