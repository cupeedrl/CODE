import java.util.*;

public class Up
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- > 0)
        {
            int N = sc.nextInt();
            int H = sc.nextInt();
            cal(N,H);
        }
    }
    static void cal(int N, int H)
    {
        for (int i = 1; i < N; i++)
        {
            System.out.printf("%.6f ", H * Math.sqrt(i*1.0/ N));
        }
        System.out.println();
    }
}
