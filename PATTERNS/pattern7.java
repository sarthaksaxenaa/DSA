public class pattern7 {
    public static void pattern1(int n){
        for(int i=0;i<n;i++){ 
            for(int j=0;j<n-i-1;j++){
                System.out.print(" ");
            }
            for(int j=0;j<2*i+1;j++){
                System.out.print("*");
            }
            for(int j=0;j<n-i-1;j++){
                System.out.print(" ");
            }
        System.out.println();
            
        }
    }
    public static void pattern2(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                System.out.print(" ");
            }
            for(int j=0;j<2*n-(2*i+1);j++){
                System.out.print("*");
            }
            for(int j=0;j<i;j++){
                System.out.print(" ");
            }
        System.out.println();
        }
    }
    public static void main(String[] args) {
        int n=4;
        pattern1(n);
        pattern2(n);
    }
}
// pattern question for github push 