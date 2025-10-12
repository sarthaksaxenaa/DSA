import java.util.*;
public class Apple {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashSet<Integer> mpp = new HashSet<>();
        int n = sc.nextInt();

        for(int i = 0; i < n; i++){
            int a = sc.nextInt();
            int[] apple = new int[a]; 
            for(int j = 0; j < a; j++){
                apple[j] = sc.nextInt();
                mpp.add(apple[j]);
            }
            System.out.println(mpp.size());
        }
    }
}
