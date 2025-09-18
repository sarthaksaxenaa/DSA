public class Ones {
    public static void main(String[] args) {
        int arr[]={1,1,0,1,1,1};
        int n =arr.length;
        int max1=0;
        int count =0;
        for(int i =0;i<n;i++){
            if(arr[i]==1){
                count++;
                max1=max(max1,count);
            }
            else{
                count=0;
            }
        }
        System.out.println(max1);
    }
    public static int max(int a, int b){
        if(a>b) return a;
        return b;
    }
}
