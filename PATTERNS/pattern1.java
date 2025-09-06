import java.util.*;
class pattern1 
{
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows you want");
        int a = sc.nextInt();
        
        int space= 0;
        int star = a;

        for(int i=0;i<=a;i++)
        {
            for(int j=1;j<=space;j++)
            {
                System.out.print("  ");
            }
            for(int j=1;j<=star;j++)
            {
                System.out.print("* ");
            }
            space++;
            star--;
            System.out.println();
        }
    }
}