import java.util.*;

public class MatrixZero {
    public static void setZeroes(int[][] arr) {
        int n = arr.length;
        int m = arr[0].length;
        int[] cols = new int[m];
        int[] rows = new int[n];
        for (int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==0){
                    rows[i] =1;
                    cols[j] =1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rows[i] ==1 || cols[j] ==1){
                    arr[i][j]=0;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[][] arr = {
            {1, 2, 3},
            {4, 0, 6},
            {7, 8, 9}
        };

        System.out.println("Before:");
        for (int[] row : arr) System.out.println(Arrays.toString(row));

        setZeroes(arr);

        System.out.println("After:");
        for (int[] row : arr) System.out.println(Arrays.toString(row));
    }
}