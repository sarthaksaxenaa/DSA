import java.util.*;
class pattern3
{
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows you wantt");
        int n = sc.nextInt();

        int space= n/2;
        int star=1;

        for(int i =1; i<=n; i++)
        {
            for(int j=1; j<=space;j++)
            {
                System.out.print("  ");
            }
            for(int j =1; j<=star; j++)
            {
                System.out.print("* ");
            }
            System.out.println();
            if(i<=n/2)
            {
                space--;
                star+=2;
            }
            else if(i>n/2)
            {
                space++;
                star-=2;
            }
        }
    }
}