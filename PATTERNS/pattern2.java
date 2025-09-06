import java.util.*;
class pattern2
{
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows");
        int n = sc.nextInt();
        int star= 1;
        int space= n-1;

        for(int i=0 ; i< n ; i++)
        {
            for(int j=1;j<=star;j++) 
            {
                System.out.print("* ");
            }
            for(int j =1;j<=space;j++)
            {
                System.out.print("  ");
            }
        star++;
        space--;
        System.out.println();
        }
    }
}