import java.util.Scanner;

public class Ex11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t>0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = (int)(Math.sqrt(a*a+b*b));
            if(c*c == a*a+b*b){
                System.out.println(c);
                t--;
                continue;
            }
            int d = (int)(Math.sqrt(Math.abs(a*a-b*b)));
            if(d*d == Math.abs(a*a-b*b)){
                System.out.println(d);
                t--;
                continue;
            }
            System.out.println(-1);
            t--;
        }
    }
}