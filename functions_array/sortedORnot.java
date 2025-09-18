public class sortedORnot {
    public static void main(String[] args) {
        int arr[]={3,4,5,1,2};
        int n =5;

        System.out.println(sortedORnoot(arr,n));
    }
    public static boolean sortedORnoot(int arr[],int n ){
        int count =0;
        for(int i =0;i<n;i++){
            if(arr[i]>arr[(i+1)%n]){
                count++;
                if(count>1) return false;
            }
        }
        return true;
    }
}
