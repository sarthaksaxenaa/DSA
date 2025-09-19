class SingleNumber {
    public static void main(String args[]) {
        int arr[]={1,2,1,2,4};
        int ans = 0;
        int  n=arr.length;
        for(int i =0;i<n;i++){
            ans = ans ^ arr[i];
        }
        System.out.println("The number repeating only once is: "+ans);
    }
}
