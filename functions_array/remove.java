class remove{
    public static void main(String[] args) {
        int arr[] = {0,1,2,2,3,0,4,2}, val = 2;
        System.out.println(remove(arr,val));
    }
    public static int remove(int[] arr , int val)
    {
        int k=0;
        int n = arr.length;
        for(int i=0;i<n; i++){
            if(arr[i] != val){
                arr[k] = arr[i];
                k++;
            }
        }
        return k;
    }
}