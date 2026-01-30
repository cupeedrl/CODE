import java.util.*;
public class Up{
    public static long[] Fibo = new long[100];

    public static void prep()
    {
        Fibo[1] = 1;
        Fibo[2] = 1;
        for(int i = 3; i <= 92; i++){
            Fibo[i] = Fibo[i-1]+ Fibo[i-2];
        }
    }
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        prep();

        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            System.out.println(Fibo[n]);
        }
    }
}
