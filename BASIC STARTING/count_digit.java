import java.util.*;
public class count_digit {
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number");
        int n=sc.nextInt();//from user
        int count=0;// counter variable
        while(n!=0)
        {
            count++;
            n=n/10;
        }
        System.out.println("Number of digits in this number are: "+count);// giving result
    }

}
