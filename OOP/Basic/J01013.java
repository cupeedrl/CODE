import java.util.*;

public class Up{
    static Scanner sc = new Scanner(System.in);
    static final int Max = 2000000; // max value of each num is 2*10^6
    static int[] prime  = new int[Max+1];

    static void sieve(){        // findMinDivisor
        for(int i = 2; i<= Max; i++){
            if(prime[i] == 0)
                for(int j = i; j<=Max;j+=i){
                    if(prime[j] == 0)
                        prime[j] = i;
                }
        }
    }

    static int test(int n){
        int sum = 0;
        while(n > 1){
            sum+= prime[n];
            n/=prime[n];
        }
        return sum;
    }

    public static void main(String[] args){
        sieve();
        int t = sc.nextInt();
        long result = 0;
        while(t-- > 0){
            result+= test(sc.nextInt());
        }
        System.out.println(result);
    }
}
