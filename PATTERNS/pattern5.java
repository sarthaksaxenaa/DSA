 import java.util.*;
public class pattern5 {
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number of rows");
        int n = sc.nextInt();

        int valc=1;
        int spc= n/2;

        for(int r=1; r<=n;r++)
        {
            for(int i=1; i<=spc;i++)
            {
                System.out.print("\t");
            }
                int val = r;
                for(int i =r; i <=valc ; i++)
                {
                    System.out.print(val+"\t");
                    val++;
                }
                System.out.println("\t");
            if(r <= n/2)
            {
                spc--;
                valc+=2;
            }
            else{
                spc++;
                valc=-2;
            }
        }
    }
    
}
/*
pattern questiongit
 */