import java.util.*;
public class reverse {
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int n=sc.nextInt();
        int a;
        while(n>0)
        {
            a=n%10;
            System.out.println(a);
            n=n/10;
        }
    }
    
}
