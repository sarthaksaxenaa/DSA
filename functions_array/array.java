
public class array {

    public static void main(String args[]) {
        int n = 5;
        int arr[] = new int[n];

        arr[0] = 12;
        arr[1] = 34;
        arr[2] = 44;
        arr[3] = 54;
        arr[4] = 64;

        // for(int i = 0;i<arr.length;i++){
        //     System.out.println(i+"-->"+arr[i]);
        // }
        for (int val : arr) {
            System.out.println("-->" + val);
        }
        System.out.println("Length of the array is:" + arr.length);

    }

}
