import java.util.*;

public class Up {
    static Scanner sc = new Scanner(System.in);

    static long prime(long n){
        long res = -1;
        for(int i = 2; i <= Math.sqrt(n); i++)
            while( n % i == 0){
                res = i;
                n/=i;
            }
        if(n != 1){
            res = n;
        }
        return res;
    }

    static void test(){
        long n = sc.nextLong();
        System.out.println(prime(n));

    }
    public static void main(String[] args)
    {
        int t = sc.nextInt();
        while(t-- > 0){
            test();
        }
    }
}
