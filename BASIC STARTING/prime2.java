import java.util.*;
public class prime2
{
    public static void main(String args[])
    {
        @SuppressWarnings("reaource")
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number to be checked");
        int num=sc.nextInt();
        boolean isPrime=true;

        for(int div=2;div*div<=num;div++)
        {
            if(num % div==0)
            {
                isPrime=false;
                break;
            }
        }
        if(isPrime==true)
        {
            System.out.println(num+" is a prime number");
        }
        else
        {
            System.out.println(num+" is not a prime number");
        }
        sc.close();

    }
}