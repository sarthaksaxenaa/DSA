import java.util.Scanner;

class Majority {
    int majorityElement(int arr[]) {
        int count = 0;
        int number = 0;
        int n=arr.length; 
        int c=0;
        for(int i = 0; i < n; i++){
            if(count == 0){
                number = arr[i];
            }
            if(arr[i] == number){
                count++;
            } else {
                count--;
            }
        }
        
        for(int i=0;i<n;i++){
            if(number==arr[i]){
                c++;
            }
        }
        if (c > n/2) return number;
        return -1;
    }
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the  number of elements in the array: ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Enter the number at index " + i + ": ");
            arr[i] = sc.nextInt();
        }
         Majority obj = new Majority();
        System.out.println("Majority element: " + obj.majorityElement(arr));
    }
}