public class pattern16 {
    public static void main(String[] args) {
        int n=5;
        for(int i=0;i<n;i++){
            // char ch='A';
            for(int j=n-i-1;j<n;j++){
                System.out.print((char)('A'+j)+" ");
            }
            System.out.println();
        }
    }
}
/*
E
D E
C D E
B C D E
A B C D E
 */