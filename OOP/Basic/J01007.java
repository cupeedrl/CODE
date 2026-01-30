import java.util.*;
public class Up{

    public static boolean CheckFibo(long n) {
        if(n < 2) return true;
        long a = 0, b = 1;
        while(b < n) {
            long c = a + b;
            a = b;
            b = c;
        }
        return b == n ;

    }
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0){
            long n = sc.nextLong();
            if(CheckFibo(n)) System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
