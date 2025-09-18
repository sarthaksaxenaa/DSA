public class missing {
    public static void main(String[] args) {
        int arr[]={3,0,1}; int sum1=0;
        int n=arr.length;
        int sum = (n*(n+1))/2;
        for(int i =0;i<n;i++){
            sum1+=arr[i];
        }
        int a=sum -sum1;

        System.err.println(a);
    }
}
