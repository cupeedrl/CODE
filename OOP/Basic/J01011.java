import java.util.*;

public class Up{

    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args){
        int t = sc.nextInt();

        while(t-- > 0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.printf("%d %d", lcm(a,b), gcd(a,b));
            System.out.println();
        }
    }
    public static int gcd(int a, int b) {
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
    public static long lcm(int a, int b){
        return (long )a * b / gcd(a, b);
    }
}
