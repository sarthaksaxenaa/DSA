import java.util.*;
class prime 
{
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the number to be checked");    
    int num=sc.nextInt();
    int tf=0;
        
        for(int div=1;div<=num;div++)
        {
            if(num%div==0)
            {
                tf++;
            }
            
        }
            if(tf==2)
            {
                System.out.println("Prime Number");
            }

            else
            {
                System.out.println("Not A Prime Number");
            }
            
    }
    
}