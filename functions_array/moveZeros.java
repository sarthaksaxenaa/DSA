public class moveZeros {
    public static void main(String[] args) {
        int arr[]={0,1,0,3,12};
        int n= 4;
        MovingZero(arr);
        for(int i=0;i<n;i++){
            System.out.print(arr[i]);
        }

    }
    public static void MovingZero(int arr[]){
        int n=arr.length;
        for(int i=0;i<n;){
            int j = 0;
            if(arr[j]>0){
                swap(arr[j],arr[i]);
            }
            j++;
        }
        
    }
    public static void swap(int a , int b){
        int temp=a;
        a=b;
        b=temp;
    }
    
}
