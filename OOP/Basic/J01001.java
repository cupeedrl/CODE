import java.util.*;

public class J01001 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int w = sc.nextInt();

        if( l<= 0 || w <= 0)
            System.out.println(0);
        else
            System.out.println(2 * (l + w) + " " + l * w);
    }
}
