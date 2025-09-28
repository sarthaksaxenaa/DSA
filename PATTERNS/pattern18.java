public class pattern18 {
    public static void main(String args[]){
        int n=5;
        //UPPER
        for(int i=n-1;i>0;i--){
            //star
            for(int j=n-i;j>0;j--){
                System.out.print("*");
            }
            //space
            for(int j=0;j<2*i;j++)
            {
                System.out.print(" ");
            }
            //star
            for(int j=n-i;j>0;j--){
                System.out.print("*");
            }
            System.out.println();
        }
        //LOWER
        for(int i=0;i<n;i++){
            //star
            for(int j=n-i;j>0;j--){
                System.out.print("*");
            }
            //space
            for(int j=0;j<2*i;j++)
            {
                System.out.print(" ");
            }
            //star
            for(int j=n-i;j>0;j--){
                System.out.print("*");
            }
        System.out.println();
        }
    }
}
