import java.util.*;

public class J01003
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        float a = sc.nextFloat();
        float b = sc.nextFloat();
       check(a,b);
    }

    static void check(float a, float b)
    {
        if(a == 0 && b != 0)
            System.out.println("VN");
        else if(a == 0 && b == 0)
            System.out.println("VSN");
        else
        {
            float x = -b / a;
            System.out.printf("%.2f%n", x);
        }
    }
}
