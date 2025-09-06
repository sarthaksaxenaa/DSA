import java.util.*;
class pattern4
{
    public static void main(String args[])
    {
         @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in); 
        System.out.println("Enter the number of rows");
        int n = sc.nextInt();
        int stars= (n+1)/2;
        int space=1;

        for(int r=1; r<=n;r++)
        {
            for(int i =1; i<=stars;i++)
            {
                System.out.print("*\t");
            }
            for(int i =1; i<=space;i++)
            {
                System.out.print("\t");
            }
            for(int i=1;i<=stars;i++)
            {
                System.out.print("*\t");
            }
            System.out.println();

            if(r <= n/2)
            {
                stars--;
                space = space+2;
            }
            else
            {
                stars++;
                space= space-2;
            }
        }
    }
}