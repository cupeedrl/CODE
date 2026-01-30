import java.util.*;

public class Up{

    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args){
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            test();
        }
    }

    public static void test() {
        String s = sc.nextLine().trim();
        String res="";

        for(int i = 0; i < s.length(); i++){
            char c = s.charAt(i);
            if(c == '0' || c == '8' || c == '9')
                res+="0";
            else if ( c == '1')
                res+=c;
            else
            {
                System.out.println("INVALID");
                return;
            }
        }
        int i = 0;
        while(i < res.length() && res.charAt(i) =='0'){
            i++;
        }
        if(i == res.length())
            System.out.println("INVALID");
        else
            System.out.println(res.substring(i));

    }
}
