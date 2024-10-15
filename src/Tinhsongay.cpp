import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class SimpleFormatDateEx {
 static final long V = 3600*24*1000;
 public static void main(String[] args) throws Exception {
  Scanner sc = new Scanner(System.in);
  SimpleDateFormat fm = new SimpleDateFormat("dd MM yyyy");
  Date d1 = fm.parse(sc.nextLine());
  Date d2 = fm.parse(sc.nextLine());
  double temp=d2.getTime()-d1.getTime();
  System.out.println(Math.round(temp/V));
 }
 
}