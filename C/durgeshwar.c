void insertionS(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>=0;j--){
            if(arr[j]<arr[j-1]){
                arr[j]+=arr[j-1];
                arr[j-1]=arr[j]-arr[j-1];
                arr[j]-=arr[j-1];
            }
        }
    }
}
