import java.util.Scanner;

public class Ex6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            String s = sc.next();
            int k = -1;
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == '1') {
                    k = i;
                }
            }
            System.out.println(k);
            t--;
        }
    }
}