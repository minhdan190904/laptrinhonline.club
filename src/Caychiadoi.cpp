import java.util.*;

public class TT {
    public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     long t = sc.nextLong();
     long n, temp, l;
     Queue<Long> q = new LinkedList<>();
     while(t>0) {
      l = 0;
      n = sc.nextLong();
      q.add(n);
      while(!q.isEmpty()) {
       for(int i = 0; i<q.size(); i++) {
        temp = q.poll();
        if(temp%2==0 && temp!=1) q.add(temp/2);
        else {
         if(temp!=1) q.add(Math.max(temp-temp/2, temp/2));
        }
       }
       l++; 
      }
      n = n*2-1;
      System.out.println(l + " " + n);
      t--;
     }
    }
}