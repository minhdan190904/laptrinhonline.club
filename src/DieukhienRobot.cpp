import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int x = 1, y = 0;
        int goc = 0;
        String t = "thang", tr = "trai", p = "phai";

        while (n-- > 0) {
            String s = scanner.next();
            goc %= 360;
            if (goc < 0) goc += 360;

            if (goc == 0) {
                if (s.equals(t)) x += 1;
                else if (s.equals(p)) y -= 1;
                else y += 1;
            } else if (goc == 90) {
                if (s.equals(t)) y += 1;
                else if (s.equals(p)) x += 1;
                else x -= 1;
            } else if (goc == 180) {
                if (s.equals(t)) x -= 1;
                else if (s.equals(p)) y += 1;
                else y -= 1;
            } else {
                if (s.equals(t)) y -= 1;
                else if (s.equals(p)) x -= 1;
                else x += 1;
            }

            if (s.equals(t)) goc = goc;
            else if (s.equals(tr)) goc += 90;
            else goc -= 90;
        }

        System.out.println(x + " " + y);
    }
}