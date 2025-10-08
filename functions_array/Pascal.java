import java.util.*;

public class Pascal {
    public static List<Integer> generateRow(int row) {
        long ans = 1;
        List<Integer> ansRow = new ArrayList<>();
        ansRow.add(1);
        for (int col = 1; col < row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            ansRow.add((int) ans);
        }
        return ansRow;
    }

    public static List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans = new ArrayList<>();
        for (int i = 1; i <= numRows; i++) {
            ans.add(generateRow(i));
        }
        return ans;
    }

    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows: ");
        int numRows = sc.nextInt();
        List<List<Integer>> result = generate(numRows);
        for (List<Integer> row : result) {
            System.out.println(row);
        }
    }
}
