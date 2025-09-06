import java.util.*;
public class Fibonacci
{
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of terms you want to print:");
        int n=sc.nextInt();
        System.out.println("terms are: ");

        int a=0;// second last term
        int b=1;//last term
        for(int i=1;i<=n;i++)
        {
            System.out.println(a);
            int c=a+b;// adding them for next term
            a=b;
            b=c;
        } 
        sc.close();

    }

}