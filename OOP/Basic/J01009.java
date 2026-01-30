import java.util.*;

public class Up{

    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args){
        int n = sc.nextInt();
        System.out.print(test(n));
    }

    public static long test(int n) {
        long sum = 0;
        long fact = 1;

        for (int i = 1; i <= n; i++) {
            fact *= i;
            sum += fact;
        }
        return sum;
    }

}
