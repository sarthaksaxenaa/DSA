import java.util.*;
public class rotate {
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int n= sc.nextInt();
        System.out.println("ENTER THE NUMBER OF ROTATIONS");
        int K=sc.nextInt();
        int temp=n;
        int d=0;

        while(temp!=0)
        {
            d++;// counter variable to count no of digits
            temp=temp/10;
        }

        int pow = (int)(Math.pow(10,K));
        int a= n / pow;
        int b = n % pow;
        
        int shift = (int)(Math.pow(10,d-K));
        int ANS =b * shift +a;

        System.out.println("THE ASNWER IS: "+ANS );
    }
}
