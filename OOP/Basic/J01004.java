import java.util.*;

public class J01004
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- > 0)
        {
            int n = sc.nextInt();
            Check(n);
            if(Check(n))
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }

    static boolean Check(int n)
    {
        for(int i = 2; i <= n/2;i++)
        {
            if (n % i == 0)
                return false;
        }
        return n>2;
    }
}
